; Auto-generated. Do not edit!


(cl:in-package plan_execution-msg)


;//! \htmlinclude ExecutePlanActionGoal.msg.html

(cl:defclass <ExecutePlanActionGoal> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (goal_id
    :reader goal_id
    :initarg :goal_id
    :type actionlib_msgs-msg:GoalID
    :initform (cl:make-instance 'actionlib_msgs-msg:GoalID))
   (goal
    :reader goal
    :initarg :goal
    :type plan_execution-msg:ExecutePlanGoal
    :initform (cl:make-instance 'plan_execution-msg:ExecutePlanGoal)))
)

(cl:defclass ExecutePlanActionGoal (<ExecutePlanActionGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ExecutePlanActionGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ExecutePlanActionGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name plan_execution-msg:<ExecutePlanActionGoal> is deprecated: use plan_execution-msg:ExecutePlanActionGoal instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <ExecutePlanActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader plan_execution-msg:header-val is deprecated.  Use plan_execution-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'goal_id-val :lambda-list '(m))
(cl:defmethod goal_id-val ((m <ExecutePlanActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader plan_execution-msg:goal_id-val is deprecated.  Use plan_execution-msg:goal_id instead.")
  (goal_id m))

(cl:ensure-generic-function 'goal-val :lambda-list '(m))
(cl:defmethod goal-val ((m <ExecutePlanActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader plan_execution-msg:goal-val is deprecated.  Use plan_execution-msg:goal instead.")
  (goal m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ExecutePlanActionGoal>) ostream)
  "Serializes a message object of type '<ExecutePlanActionGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'goal_id) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'goal) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ExecutePlanActionGoal>) istream)
  "Deserializes a message object of type '<ExecutePlanActionGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'goal_id) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'goal) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ExecutePlanActionGoal>)))
  "Returns string type for a message object of type '<ExecutePlanActionGoal>"
  "plan_execution/ExecutePlanActionGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ExecutePlanActionGoal)))
  "Returns string type for a message object of type 'ExecutePlanActionGoal"
  "plan_execution/ExecutePlanActionGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ExecutePlanActionGoal>)))
  "Returns md5sum for a message object of type '<ExecutePlanActionGoal>"
  "121272223b4e58537504f2f47328a995")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ExecutePlanActionGoal)))
  "Returns md5sum for a message object of type 'ExecutePlanActionGoal"
  "121272223b4e58537504f2f47328a995")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ExecutePlanActionGoal>)))
  "Returns full string definition for message of type '<ExecutePlanActionGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%ExecutePlanGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: plan_execution/ExecutePlanGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%AspRule[] aspGoal~%~%================================================================================~%MSG: plan_execution/AspRule~%AspFluent[] head~%AspFluent[] body~%~%================================================================================~%MSG: plan_execution/AspFluent~%string name~%string[] variables~%uint32 timeStep~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ExecutePlanActionGoal)))
  "Returns full string definition for message of type 'ExecutePlanActionGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%ExecutePlanGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: plan_execution/ExecutePlanGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%AspRule[] aspGoal~%~%================================================================================~%MSG: plan_execution/AspRule~%AspFluent[] head~%AspFluent[] body~%~%================================================================================~%MSG: plan_execution/AspFluent~%string name~%string[] variables~%uint32 timeStep~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ExecutePlanActionGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'goal_id))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'goal))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ExecutePlanActionGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'ExecutePlanActionGoal
    (cl:cons ':header (header msg))
    (cl:cons ':goal_id (goal_id msg))
    (cl:cons ':goal (goal msg))
))