; Auto-generated. Do not edit!


(cl:in-package bwi_msgs-msg)


;//! \htmlinclude LogicalActionResult.msg.html

(cl:defclass <LogicalActionResult> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil)
   (status
    :reader status
    :initarg :status
    :type cl:string
    :initform "")
   (observations
    :reader observations
    :initarg :observations
    :type (cl:vector bwi_planning_common-msg:PlannerAtom)
   :initform (cl:make-array 0 :element-type 'bwi_planning_common-msg:PlannerAtom :initial-element (cl:make-instance 'bwi_planning_common-msg:PlannerAtom))))
)

(cl:defclass LogicalActionResult (<LogicalActionResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LogicalActionResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LogicalActionResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name bwi_msgs-msg:<LogicalActionResult> is deprecated: use bwi_msgs-msg:LogicalActionResult instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <LogicalActionResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader bwi_msgs-msg:success-val is deprecated.  Use bwi_msgs-msg:success instead.")
  (success m))

(cl:ensure-generic-function 'status-val :lambda-list '(m))
(cl:defmethod status-val ((m <LogicalActionResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader bwi_msgs-msg:status-val is deprecated.  Use bwi_msgs-msg:status instead.")
  (status m))

(cl:ensure-generic-function 'observations-val :lambda-list '(m))
(cl:defmethod observations-val ((m <LogicalActionResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader bwi_msgs-msg:observations-val is deprecated.  Use bwi_msgs-msg:observations instead.")
  (observations m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LogicalActionResult>) ostream)
  "Serializes a message object of type '<LogicalActionResult>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'status))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'status))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'observations))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'observations))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LogicalActionResult>) istream)
  "Deserializes a message object of type '<LogicalActionResult>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'status) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'status) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'observations) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'observations)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'bwi_planning_common-msg:PlannerAtom))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LogicalActionResult>)))
  "Returns string type for a message object of type '<LogicalActionResult>"
  "bwi_msgs/LogicalActionResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LogicalActionResult)))
  "Returns string type for a message object of type 'LogicalActionResult"
  "bwi_msgs/LogicalActionResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LogicalActionResult>)))
  "Returns md5sum for a message object of type '<LogicalActionResult>"
  "4b369ca08113322eccf2b5371446d8fc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LogicalActionResult)))
  "Returns md5sum for a message object of type 'LogicalActionResult"
  "4b369ca08113322eccf2b5371446d8fc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LogicalActionResult>)))
  "Returns full string definition for message of type '<LogicalActionResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%bool success~%string status~%bwi_planning_common/PlannerAtom[] observations~%~%================================================================================~%MSG: bwi_planning_common/PlannerAtom~%string name~%string[] value~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LogicalActionResult)))
  "Returns full string definition for message of type 'LogicalActionResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%bool success~%string status~%bwi_planning_common/PlannerAtom[] observations~%~%================================================================================~%MSG: bwi_planning_common/PlannerAtom~%string name~%string[] value~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LogicalActionResult>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'status))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'observations) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LogicalActionResult>))
  "Converts a ROS message object to a list"
  (cl:list 'LogicalActionResult
    (cl:cons ':success (success msg))
    (cl:cons ':status (status msg))
    (cl:cons ':observations (observations msg))
))
