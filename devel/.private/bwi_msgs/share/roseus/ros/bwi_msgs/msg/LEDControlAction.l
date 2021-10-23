;; Auto-generated. Do not edit!


(when (boundp 'bwi_msgs::LEDControlAction)
  (if (not (find-package "BWI_MSGS"))
    (make-package "BWI_MSGS"))
  (shadow 'LEDControlAction (find-package "BWI_MSGS")))
(unless (find-package "BWI_MSGS::LEDCONTROLACTION")
  (make-package "BWI_MSGS::LEDCONTROLACTION"))

(in-package "ROS")
;;//! \htmlinclude LEDControlAction.msg.html


(defclass bwi_msgs::LEDControlAction
  :super ros::object
  :slots (_action_goal _action_result _action_feedback ))

(defmethod bwi_msgs::LEDControlAction
  (:init
   (&key
    ((:action_goal __action_goal) (instance bwi_msgs::LEDControlActionGoal :init))
    ((:action_result __action_result) (instance bwi_msgs::LEDControlActionResult :init))
    ((:action_feedback __action_feedback) (instance bwi_msgs::LEDControlActionFeedback :init))
    )
   (send-super :init)
   (setq _action_goal __action_goal)
   (setq _action_result __action_result)
   (setq _action_feedback __action_feedback)
   self)
  (:action_goal
   (&rest __action_goal)
   (if (keywordp (car __action_goal))
       (send* _action_goal __action_goal)
     (progn
       (if __action_goal (setq _action_goal (car __action_goal)))
       _action_goal)))
  (:action_result
   (&rest __action_result)
   (if (keywordp (car __action_result))
       (send* _action_result __action_result)
     (progn
       (if __action_result (setq _action_result (car __action_result)))
       _action_result)))
  (:action_feedback
   (&rest __action_feedback)
   (if (keywordp (car __action_feedback))
       (send* _action_feedback __action_feedback)
     (progn
       (if __action_feedback (setq _action_feedback (car __action_feedback)))
       _action_feedback)))
  (:serialization-length
   ()
   (+
    ;; bwi_msgs/LEDControlActionGoal _action_goal
    (send _action_goal :serialization-length)
    ;; bwi_msgs/LEDControlActionResult _action_result
    (send _action_result :serialization-length)
    ;; bwi_msgs/LEDControlActionFeedback _action_feedback
    (send _action_feedback :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bwi_msgs/LEDControlActionGoal _action_goal
       (send _action_goal :serialize s)
     ;; bwi_msgs/LEDControlActionResult _action_result
       (send _action_result :serialize s)
     ;; bwi_msgs/LEDControlActionFeedback _action_feedback
       (send _action_feedback :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bwi_msgs/LEDControlActionGoal _action_goal
     (send _action_goal :deserialize buf ptr-) (incf ptr- (send _action_goal :serialization-length))
   ;; bwi_msgs/LEDControlActionResult _action_result
     (send _action_result :deserialize buf ptr-) (incf ptr- (send _action_result :serialization-length))
   ;; bwi_msgs/LEDControlActionFeedback _action_feedback
     (send _action_feedback :deserialize buf ptr-) (incf ptr- (send _action_feedback :serialization-length))
   ;;
   self)
  )

(setf (get bwi_msgs::LEDControlAction :md5sum-) "b2b1d1d58861a5d87a8a18f32f52c8e7")
(setf (get bwi_msgs::LEDControlAction :datatype-) "bwi_msgs/LEDControlAction")
(setf (get bwi_msgs::LEDControlAction :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

LEDControlActionGoal action_goal
LEDControlActionResult action_result
LEDControlActionFeedback action_feedback

================================================================================
MSG: bwi_msgs/LEDControlActionGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalID goal_id
LEDControlGoal goal

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: actionlib_msgs/GoalID
# The stamp should store the time at which this goal was requested.
# It is used by an action server when it tries to preempt all
# goals that were requested before a certain time
time stamp

# The id provides a way to associate feedback and
# result message with specific goal requests. The id
# specified must be unique.
string id


================================================================================
MSG: bwi_msgs/LEDControlGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#goal definition
bwi_msgs/LEDAnimations type
duration timeout

================================================================================
MSG: bwi_msgs/LEDAnimations
# LED Animations

# Action Variables
uint8 LEFT_TURN = 1
uint8 RIGHT_TURN = 2
uint8 REVERSE = 3
uint8 BLOCKED = 4
uint8 UP = 5
uint8 DOWN = 6
uint8 NEED_ASSIST = 7

# Selects which animation to execute

uint8 led_animations
================================================================================
MSG: bwi_msgs/LEDControlActionResult
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalStatus status
LEDControlResult result

================================================================================
MSG: actionlib_msgs/GoalStatus
GoalID goal_id
uint8 status
uint8 PENDING         = 0   # The goal has yet to be processed by the action server
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing
                            #   and has since completed its execution (Terminal State)
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due
                            #    to some failure (Terminal State)
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,
                            #    because the goal was unattainable or invalid (Terminal State)
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing
                            #    and has not yet completed execution
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,
                            #    but the action server has not yet confirmed that the goal is canceled
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing
                            #    and was successfully cancelled (Terminal State)
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be
                            #    sent over the wire by an action server

#Allow for the user to associate a string with GoalStatus for debugging
string text


================================================================================
MSG: bwi_msgs/LEDControlResult
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#result definition
uint8 result
string status

================================================================================
MSG: bwi_msgs/LEDControlActionFeedback
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalStatus status
LEDControlFeedback feedback

================================================================================
MSG: bwi_msgs/LEDControlFeedback
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#feedback
duration time_running

")



(provide :bwi_msgs/LEDControlAction "b2b1d1d58861a5d87a8a18f32f52c8e7")

