;; Auto-generated. Do not edit!


(when (boundp 'bwi_msgs::Trigger)
  (if (not (find-package "BWI_MSGS"))
    (make-package "BWI_MSGS"))
  (shadow 'Trigger (find-package "BWI_MSGS")))
(unless (find-package "BWI_MSGS::TRIGGER")
  (make-package "BWI_MSGS::TRIGGER"))
(unless (find-package "BWI_MSGS::TRIGGERREQUEST")
  (make-package "BWI_MSGS::TRIGGERREQUEST"))
(unless (find-package "BWI_MSGS::TRIGGERRESPONSE")
  (make-package "BWI_MSGS::TRIGGERRESPONSE"))

(in-package "ROS")





(defclass bwi_msgs::TriggerRequest
  :super ros::object
  :slots ())

(defmethod bwi_msgs::TriggerRequest
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(defclass bwi_msgs::TriggerResponse
  :super ros::object
  :slots (_success _message ))

(defmethod bwi_msgs::TriggerResponse
  (:init
   (&key
    ((:success __success) nil)
    ((:message __message) "")
    )
   (send-super :init)
   (setq _success __success)
   (setq _message (string __message))
   self)
  (:success
   (&optional __success)
   (if __success (setq _success __success)) _success)
  (:message
   (&optional __message)
   (if __message (setq _message __message)) _message)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ;; string _message
    4 (length _message)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;; string _message
       (write-long (length _message) s) (princ _message s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; string _message
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _message (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass bwi_msgs::Trigger
  :super ros::object
  :slots ())

(setf (get bwi_msgs::Trigger :md5sum-) "937c9679a518e3a18d831e57125ea522")
(setf (get bwi_msgs::Trigger :datatype-) "bwi_msgs/Trigger")
(setf (get bwi_msgs::Trigger :request) bwi_msgs::TriggerRequest)
(setf (get bwi_msgs::Trigger :response) bwi_msgs::TriggerResponse)

(defmethod bwi_msgs::TriggerRequest
  (:response () (instance bwi_msgs::TriggerResponse :init)))

(setf (get bwi_msgs::TriggerRequest :md5sum-) "937c9679a518e3a18d831e57125ea522")
(setf (get bwi_msgs::TriggerRequest :datatype-) "bwi_msgs/TriggerRequest")
(setf (get bwi_msgs::TriggerRequest :definition-)
      "---
bool success
string message

")

(setf (get bwi_msgs::TriggerResponse :md5sum-) "937c9679a518e3a18d831e57125ea522")
(setf (get bwi_msgs::TriggerResponse :datatype-) "bwi_msgs/TriggerResponse")
(setf (get bwi_msgs::TriggerResponse :definition-)
      "---
bool success
string message

")



(provide :bwi_msgs/Trigger "937c9679a518e3a18d831e57125ea522")


