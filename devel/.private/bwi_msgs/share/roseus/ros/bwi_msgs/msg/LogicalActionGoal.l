;; Auto-generated. Do not edit!


(when (boundp 'bwi_msgs::LogicalActionGoal)
  (if (not (find-package "BWI_MSGS"))
    (make-package "BWI_MSGS"))
  (shadow 'LogicalActionGoal (find-package "BWI_MSGS")))
(unless (find-package "BWI_MSGS::LOGICALACTIONGOAL")
  (make-package "BWI_MSGS::LOGICALACTIONGOAL"))

(in-package "ROS")
;;//! \htmlinclude LogicalActionGoal.msg.html
(if (not (find-package "BWI_PLANNING_COMMON"))
  (ros::roseus-add-msgs "bwi_planning_common"))


(defclass bwi_msgs::LogicalActionGoal
  :super ros::object
  :slots (_command ))

(defmethod bwi_msgs::LogicalActionGoal
  (:init
   (&key
    ((:command __command) (instance bwi_planning_common::PlannerAtom :init))
    )
   (send-super :init)
   (setq _command __command)
   self)
  (:command
   (&rest __command)
   (if (keywordp (car __command))
       (send* _command __command)
     (progn
       (if __command (setq _command (car __command)))
       _command)))
  (:serialization-length
   ()
   (+
    ;; bwi_planning_common/PlannerAtom _command
    (send _command :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bwi_planning_common/PlannerAtom _command
       (send _command :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bwi_planning_common/PlannerAtom _command
     (send _command :deserialize buf ptr-) (incf ptr- (send _command :serialization-length))
   ;;
   self)
  )

(setf (get bwi_msgs::LogicalActionGoal :md5sum-) "3b44d18631c1272d8bcb3e1f37b50d61")
(setf (get bwi_msgs::LogicalActionGoal :datatype-) "bwi_msgs/LogicalActionGoal")
(setf (get bwi_msgs::LogicalActionGoal :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
bwi_planning_common/PlannerAtom command

================================================================================
MSG: bwi_planning_common/PlannerAtom
string name
string[] value

")



(provide :bwi_msgs/LogicalActionGoal "3b44d18631c1272d8bcb3e1f37b50d61")

