; Auto-generated. Do not edit!


(cl:in-package bwi_perception-srv)


;//! \htmlinclude ProcessVision-request.msg.html

(cl:defclass <ProcessVision-request> (roslisp-msg-protocol:ros-message)
  ((start
    :reader start
    :initarg :start
    :type cl:integer
    :initform 0)
   (generalImageFilePath
    :reader generalImageFilePath
    :initarg :generalImageFilePath
    :type cl:string
    :initform "")
   (generalDepthImagePath
    :reader generalDepthImagePath
    :initarg :generalDepthImagePath
    :type cl:string
    :initform ""))
)

(cl:defclass ProcessVision-request (<ProcessVision-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ProcessVision-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ProcessVision-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name bwi_perception-srv:<ProcessVision-request> is deprecated: use bwi_perception-srv:ProcessVision-request instead.")))

(cl:ensure-generic-function 'start-val :lambda-list '(m))
(cl:defmethod start-val ((m <ProcessVision-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader bwi_perception-srv:start-val is deprecated.  Use bwi_perception-srv:start instead.")
  (start m))

(cl:ensure-generic-function 'generalImageFilePath-val :lambda-list '(m))
(cl:defmethod generalImageFilePath-val ((m <ProcessVision-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader bwi_perception-srv:generalImageFilePath-val is deprecated.  Use bwi_perception-srv:generalImageFilePath instead.")
  (generalImageFilePath m))

(cl:ensure-generic-function 'generalDepthImagePath-val :lambda-list '(m))
(cl:defmethod generalDepthImagePath-val ((m <ProcessVision-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader bwi_perception-srv:generalDepthImagePath-val is deprecated.  Use bwi_perception-srv:generalDepthImagePath instead.")
  (generalDepthImagePath m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ProcessVision-request>) ostream)
  "Serializes a message object of type '<ProcessVision-request>"
  (cl:let* ((signed (cl:slot-value msg 'start)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    )
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'generalImageFilePath))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'generalImageFilePath))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'generalDepthImagePath))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'generalDepthImagePath))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ProcessVision-request>) istream)
  "Deserializes a message object of type '<ProcessVision-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'start) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'generalImageFilePath) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'generalImageFilePath) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'generalDepthImagePath) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'generalDepthImagePath) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ProcessVision-request>)))
  "Returns string type for a service object of type '<ProcessVision-request>"
  "bwi_perception/ProcessVisionRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ProcessVision-request)))
  "Returns string type for a service object of type 'ProcessVision-request"
  "bwi_perception/ProcessVisionRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ProcessVision-request>)))
  "Returns md5sum for a message object of type '<ProcessVision-request>"
  "6e09057bca6c469f3261816784f3e445")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ProcessVision-request)))
  "Returns md5sum for a message object of type 'ProcessVision-request"
  "6e09057bca6c469f3261816784f3e445")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ProcessVision-request>)))
  "Returns full string definition for message of type '<ProcessVision-request>"
  (cl:format cl:nil "int64 start~%string generalImageFilePath~%string generalDepthImagePath~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ProcessVision-request)))
  "Returns full string definition for message of type 'ProcessVision-request"
  (cl:format cl:nil "int64 start~%string generalImageFilePath~%string generalDepthImagePath~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ProcessVision-request>))
  (cl:+ 0
     8
     4 (cl:length (cl:slot-value msg 'generalImageFilePath))
     4 (cl:length (cl:slot-value msg 'generalDepthImagePath))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ProcessVision-request>))
  "Converts a ROS message object to a list"
  (cl:list 'ProcessVision-request
    (cl:cons ':start (start msg))
    (cl:cons ':generalImageFilePath (generalImageFilePath msg))
    (cl:cons ':generalDepthImagePath (generalDepthImagePath msg))
))
;//! \htmlinclude ProcessVision-response.msg.html

(cl:defclass <ProcessVision-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass ProcessVision-response (<ProcessVision-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ProcessVision-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ProcessVision-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name bwi_perception-srv:<ProcessVision-response> is deprecated: use bwi_perception-srv:ProcessVision-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <ProcessVision-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader bwi_perception-srv:success-val is deprecated.  Use bwi_perception-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ProcessVision-response>) ostream)
  "Serializes a message object of type '<ProcessVision-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ProcessVision-response>) istream)
  "Deserializes a message object of type '<ProcessVision-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ProcessVision-response>)))
  "Returns string type for a service object of type '<ProcessVision-response>"
  "bwi_perception/ProcessVisionResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ProcessVision-response)))
  "Returns string type for a service object of type 'ProcessVision-response"
  "bwi_perception/ProcessVisionResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ProcessVision-response>)))
  "Returns md5sum for a message object of type '<ProcessVision-response>"
  "6e09057bca6c469f3261816784f3e445")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ProcessVision-response)))
  "Returns md5sum for a message object of type 'ProcessVision-response"
  "6e09057bca6c469f3261816784f3e445")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ProcessVision-response>)))
  "Returns full string definition for message of type '<ProcessVision-response>"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ProcessVision-response)))
  "Returns full string definition for message of type 'ProcessVision-response"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ProcessVision-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ProcessVision-response>))
  "Converts a ROS message object to a list"
  (cl:list 'ProcessVision-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'ProcessVision)))
  'ProcessVision-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'ProcessVision)))
  'ProcessVision-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ProcessVision)))
  "Returns string type for a service object of type '<ProcessVision>"
  "bwi_perception/ProcessVision")