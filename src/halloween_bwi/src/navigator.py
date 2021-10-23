#!/usr/bin/env python
from __future__ import absolute_import, division, print_function
from builtins import (bytes, str, open, super, range,
                      zip, round, input, int, pow, object)
import rospy
import actionlib
from geometry_msgs.msg import Twist
from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal, MoveBaseFeedback
from actionlib_msgs.msg import *
from geometry_msgs.msg import Pose, Point, PoseWithCovarianceStamped, Quaternion, PoseStamped
from nav_msgs.srv import GetPlan
from sound_play.libsoundplay import SoundClient
from actionlib_msgs.msg import *
import std_srvs.srv
import subprocess

from location import locations
from collections import defaultdict
from threading import Timer
import random
import time
from pygame import mixer  # Load the popular external library


class ControllerClass(object):
    def __init__(self):
        self.to_x, self.to_y = None, None
        self.pose_x, self.pose_y = None, None

        self.ac = actionlib.SimpleActionClient("move_base", MoveBaseAction)
        while not self.ac.wait_for_server(rospy.Duration.from_sec(5.0)):
            rospy.loginfo("Waiting for the move_base action server to come up")

        rospy.Subscriber('/amcl_pose', PoseWithCovarianceStamped, self.callback_pose)

        self.clear_cost = rospy.ServiceProxy('/move_base/clear_costmaps', std_srvs.srv.Empty())
	mixer.init()
        self.sound_handler = SoundClient()
        rospy.sleep(3)
        self.sound_handler.say('Program starts.')

    def clear_obstacle_map(self):
        self.clear_cost()
        rospy.sleep(3)

    def goto_location(self, location):
        goalReached = self.moveToGoal(location)
        return goalReached

    def moveToGoal(self, location):
        goal = MoveBaseGoal()

        goal.target_pose.header.frame_id = "level_mux_map"
        goal.target_pose.header.stamp = rospy.Time.now()

        self.to_x, self.to_y = location["x"], location["y"]
        ox, oy, oz, ow = location["ox"], location["oy"], location["oz"], location["ow"]
        goal.target_pose.pose.position = Point(self.to_x, self.to_y, 0)
        goal.target_pose.pose.orientation.x = ox
        goal.target_pose.pose.orientation.y = oy
        goal.target_pose.pose.orientation.z = oz
        goal.target_pose.pose.orientation.w = ow
        rospy.loginfo("Sending location ({0}, {1})".format(self.to_x, self.to_y))
        self.ac.send_goal(goal, self.done_cb, self.active_cb, self.feedback_cb)

        self.ac.wait_for_result(rospy.Duration(360))
        if self.ac.get_state() == GoalStatus.SUCCEEDED:
            # rospy.loginfo("This is the end of navigation")
            return True
        else:
            self.ac.cancel_all_goals()
            return False

    def active_cb(self):

	
	
        pass

    def feedback_cb(self, feedback):
	time.sleep(1)
        rand = random.randint(0, 7)
	if rand == 0:
	    mixer.music.load("/home/kishan/rl_ws/src/halloween_bwi/src/It's halloween time.mp3")
	    mixer.music.play()   
	    rospy.sleep(10)
        elif rand == 1:
	    mixer.music.load("/home/kishan/rl_ws/src/halloween_bwi/src/I belong to Autonomous Intelligent Robotics Lab.mp3")
	    mixer.music.play()   
	    rospy.sleep(10)
	elif rand == 2:
	    mixer.music.load("/home/kishan/rl_ws/src/halloween_bwi/src/You can go.mp3")
	    mixer.music.play()   
	    rospy.sleep(10)
	elif rand == 3:
	    mixer.music.load("/home/kishan/rl_ws/src/halloween_bwi/src/No Tricks pick up your treat.mp3")
	    mixer.music.play()   
	    rospy.sleep(10)
	elif rand == 4:
	    mixer.music.load("/home/kishan/rl_ws/src/halloween_bwi/src/Pick up the treat.mp3")
	    mixer.music.play()   
	    rospy.sleep(10)
	elif rand == 5:
	    mixer.music.load("/home/kishan/rl_ws/src/halloween_bwi/src/If you are interested in me, feel free to ask A I R students.mp3")
	    mixer.music.play()   
	    rospy.sleep(10)
	else:
	    mixer.music.load("/home/kishan/rl_ws/src/halloween_bwi/src/Ha ha ha.mp3")
	    mixer.music.play() 

    def done_cb(self, status, result):
        if status == 2:
            rospy.loginfo("Goal pose ({0}, {1})".format(self.to_x, self.to_y) +
                          " received a cancel request after it started executing, completed execution!")

        if status == 3:
            rospy.loginfo("Goal pose ({0}, {1})".format(self.to_x, self.to_y) + " reached")

        if status == 4:
            rospy.loginfo("Goal pose ({0}, {1})".format(self.to_x, self.to_y) + " was aborted by the Action Server")
            self.ac.cancel_all_goals()

        if status == 5:
            rospy.loginfo("Goal pose ({0}, {1})".format(self.to_x, self.to_y) + " has been rejected by the Action Server")
            self.ac.cancel_all_goals()

        if status == 6:
            rospy.loginfo("Goal pose ({0}, {1})".format(self.to_x, self.to_y) +
                          "received a cancel request after it started executing and has not yet completed execution")
            self.ac.cancel_all_goals()

        if status == 8:
            rospy.loginfo("Goal pose ({0}, {1})".format(self.to_x, self.to_y) +
                          " received a cancel request before it started executing, successfully cancelled!")

    def checkdoor_open(self, cur, tar):
        rospy.wait_for_service('move_base/NavfnROS/make_plan')
        make_plan = rospy.ServiceProxy('move_base/NavfnROS/make_plan', GetPlan)
        tolerance = 0.1
        start = self.set_pose(cur)
        goal = self.set_pose(tar)
        plan_response = make_plan(start=start, goal=goal, tolerance=tolerance)
        poses = plan_response.plan.poses
        print(len(poses))
        # print("({0}, {1}), ({2}, {3})".format(cur["x"], cur["y"], tar["x"], tar["y"]))
        return 0 < len(poses) < 500

    def approach(self, name, coordinate):
        print("[Call] approaching door: " + name + " which is at: ({0}, {1})".format(coordinate["x"], coordinate["y"]))
        return self.goto_location(coordinate)

    def opendoor(self, cur, tar):
        done = False
        start = time.clock()
        end = time.clock()
        while (not done) and (end - start < 3):
            self.clear_obstacle_map()
            result = self.checkdoor_open(cur, tar)
            end = time.clock()
            if not result:
                rospy.sleep(1)
                self.sound_handler.say('Please Open the door for me.')
                print("[Call] Please Open the door for me.")
                rospy.sleep(3)
                done = False
            else:
                rospy.sleep(1)
                self.sound_handler.say('Thank you.')
                rospy.sleep(1)
                print("[Call] Thank you.")
                done = True
        return done

    def gothrough(self, name, cur, tar):
        print("[Call] Gothrough to door: " + name + " which is at: ({0}, {1})".format(tar["x"], tar["y"]))
        rospy.wait_for_service('move_base/NavfnROS/make_plan')
        make_plan = rospy.ServiceProxy('move_base/NavfnROS/make_plan', GetPlan)
        tolerance = 0.1
        start = self.set_pose(cur)
        goal = self.set_pose(tar)
        self.clear_obstacle_map()
        plan_response = make_plan(start=start, goal=goal, tolerance=tolerance)
        poses = plan_response.plan.poses
        if len(poses) > 1000:
            return False
        return self.goto_location(tar)

    # for loop over the plan
    def callback_pose(self, data):
        self.pose_x = data.pose.pose.position.x
        self.pose_y = data.pose.pose.position.y
        with open('robot_location.txt', 'a') as f:
            f.write(str(self.pose_x) + "," + str(self.pose_y))
            f.close()

    def get_pose(self):
        return self.pose_x, self.pose_y

    def set_pose(self, location):
        rospy.Subscriber('/amcl_pose', PoseWithCovarianceStamped, self.callback_pose)
        pos = PoseStamped()
        pos.header.frame_id = "level_mux_map"
        x, y, ox, oy, oz, ow = location["x"], location["y"], location["ox"], location["oy"], location["oz"], location["ow"]
        pos.pose.position.x = x
        pos.pose.position.y = y
        pos.pose.orientation.x = ox
        pos.pose.orientation.y = oy
        pos.pose.orientation.z = oz
        pos.pose.orientation.w = ow
        return pos



if __name__ == "__main__":
    pass
