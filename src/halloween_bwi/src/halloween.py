#!/usr/bin/env python
from __future__ import absolute_import, division, print_function
from builtins import (bytes, str, open, super, range,
                      zip, round, input, int, pow, object)

import rospy
from geometry_msgs.msg import Pose, Point, PoseWithCovarianceStamped, Quaternion, PoseStamped

from location import *
from navigator import *

import os.path
import copy
from os import path
import sys


if __name__ == '__main__':
    try:
        rospy.init_node('halloween')
        controller = ControllerClass()
	soundhandle = SoundClient()
	rospy.sleep(2)
	while True:
		controller.goto_location(locations["sta"])
		controller.goto_location(locations["end"])
	

        rospy.spin()

    except rospy.ROSInterruptException:
        print("finished!")
