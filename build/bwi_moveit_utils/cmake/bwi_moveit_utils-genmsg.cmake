# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "bwi_moveit_utils: 0 messages, 3 services")

set(MSG_I_FLAGS "-Imoveit_msgs:/opt/ros/kinetic/share/moveit_msgs/cmake/../msg;-Isensor_msgs:/opt/ros/kinetic/share/sensor_msgs/cmake/../msg;-Iactionlib_msgs:/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg;-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/kinetic/share/geometry_msgs/cmake/../msg;-Itrajectory_msgs:/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg;-Ishape_msgs:/opt/ros/kinetic/share/shape_msgs/cmake/../msg;-Iobject_recognition_msgs:/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg;-Ioctomap_msgs:/opt/ros/kinetic/share/octomap_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(bwi_moveit_utils_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitWaypoint.srv" NAME_WE)
add_custom_target(_bwi_moveit_utils_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "bwi_moveit_utils" "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitWaypoint.srv" "geometry_msgs/Pose:std_msgs/Header:moveit_msgs/Constraints:moveit_msgs/OrientationConstraint:geometry_msgs/Quaternion:shape_msgs/SolidPrimitive:geometry_msgs/Point:shape_msgs/Plane:moveit_msgs/CollisionObject:geometry_msgs/Vector3:shape_msgs/Mesh:geometry_msgs/PoseStamped:moveit_msgs/PositionConstraint:moveit_msgs/VisibilityConstraint:shape_msgs/MeshTriangle:object_recognition_msgs/ObjectType:moveit_msgs/BoundingVolume:moveit_msgs/JointConstraint"
)

get_filename_component(_filename "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitCartesianPose.srv" NAME_WE)
add_custom_target(_bwi_moveit_utils_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "bwi_moveit_utils" "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitCartesianPose.srv" "object_recognition_msgs/ObjectType:geometry_msgs/PoseStamped:std_msgs/Header:moveit_msgs/Constraints:moveit_msgs/OrientationConstraint:geometry_msgs/Quaternion:shape_msgs/SolidPrimitive:geometry_msgs/Point:shape_msgs/Plane:moveit_msgs/CollisionObject:geometry_msgs/Vector3:shape_msgs/Mesh:moveit_msgs/PositionConstraint:moveit_msgs/VisibilityConstraint:shape_msgs/MeshTriangle:geometry_msgs/Pose:moveit_msgs/BoundingVolume:moveit_msgs/JointConstraint"
)

get_filename_component(_filename "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitJointPose.srv" NAME_WE)
add_custom_target(_bwi_moveit_utils_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "bwi_moveit_utils" "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitJointPose.srv" "moveit_msgs/CollisionObject:std_msgs/Header:moveit_msgs/Constraints:moveit_msgs/OrientationConstraint:geometry_msgs/Quaternion:shape_msgs/SolidPrimitive:geometry_msgs/Point:shape_msgs/Plane:geometry_msgs/Vector3:shape_msgs/Mesh:geometry_msgs/PoseStamped:geometry_msgs/Pose:moveit_msgs/PositionConstraint:moveit_msgs/VisibilityConstraint:shape_msgs/MeshTriangle:object_recognition_msgs/ObjectType:moveit_msgs/BoundingVolume:moveit_msgs/JointConstraint"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services
_generate_srv_cpp(bwi_moveit_utils
  "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitWaypoint.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/Constraints.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/OrientationConstraint.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/PositionConstraint.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/VisibilityConstraint.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/BoundingVolume.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/JointConstraint.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/bwi_moveit_utils
)
_generate_srv_cpp(bwi_moveit_utils
  "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitCartesianPose.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/Constraints.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/OrientationConstraint.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/PositionConstraint.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/VisibilityConstraint.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/BoundingVolume.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/JointConstraint.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/bwi_moveit_utils
)
_generate_srv_cpp(bwi_moveit_utils
  "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitJointPose.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/Constraints.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/OrientationConstraint.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/PositionConstraint.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/VisibilityConstraint.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/BoundingVolume.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/JointConstraint.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/bwi_moveit_utils
)

### Generating Module File
_generate_module_cpp(bwi_moveit_utils
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/bwi_moveit_utils
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(bwi_moveit_utils_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(bwi_moveit_utils_generate_messages bwi_moveit_utils_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitWaypoint.srv" NAME_WE)
add_dependencies(bwi_moveit_utils_generate_messages_cpp _bwi_moveit_utils_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitCartesianPose.srv" NAME_WE)
add_dependencies(bwi_moveit_utils_generate_messages_cpp _bwi_moveit_utils_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitJointPose.srv" NAME_WE)
add_dependencies(bwi_moveit_utils_generate_messages_cpp _bwi_moveit_utils_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(bwi_moveit_utils_gencpp)
add_dependencies(bwi_moveit_utils_gencpp bwi_moveit_utils_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS bwi_moveit_utils_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages

### Generating Services
_generate_srv_eus(bwi_moveit_utils
  "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitWaypoint.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/Constraints.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/OrientationConstraint.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/PositionConstraint.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/VisibilityConstraint.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/BoundingVolume.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/JointConstraint.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/bwi_moveit_utils
)
_generate_srv_eus(bwi_moveit_utils
  "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitCartesianPose.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/Constraints.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/OrientationConstraint.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/PositionConstraint.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/VisibilityConstraint.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/BoundingVolume.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/JointConstraint.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/bwi_moveit_utils
)
_generate_srv_eus(bwi_moveit_utils
  "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitJointPose.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/Constraints.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/OrientationConstraint.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/PositionConstraint.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/VisibilityConstraint.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/BoundingVolume.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/JointConstraint.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/bwi_moveit_utils
)

### Generating Module File
_generate_module_eus(bwi_moveit_utils
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/bwi_moveit_utils
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(bwi_moveit_utils_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(bwi_moveit_utils_generate_messages bwi_moveit_utils_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitWaypoint.srv" NAME_WE)
add_dependencies(bwi_moveit_utils_generate_messages_eus _bwi_moveit_utils_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitCartesianPose.srv" NAME_WE)
add_dependencies(bwi_moveit_utils_generate_messages_eus _bwi_moveit_utils_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitJointPose.srv" NAME_WE)
add_dependencies(bwi_moveit_utils_generate_messages_eus _bwi_moveit_utils_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(bwi_moveit_utils_geneus)
add_dependencies(bwi_moveit_utils_geneus bwi_moveit_utils_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS bwi_moveit_utils_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages

### Generating Services
_generate_srv_lisp(bwi_moveit_utils
  "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitWaypoint.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/Constraints.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/OrientationConstraint.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/PositionConstraint.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/VisibilityConstraint.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/BoundingVolume.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/JointConstraint.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/bwi_moveit_utils
)
_generate_srv_lisp(bwi_moveit_utils
  "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitCartesianPose.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/Constraints.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/OrientationConstraint.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/PositionConstraint.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/VisibilityConstraint.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/BoundingVolume.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/JointConstraint.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/bwi_moveit_utils
)
_generate_srv_lisp(bwi_moveit_utils
  "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitJointPose.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/Constraints.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/OrientationConstraint.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/PositionConstraint.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/VisibilityConstraint.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/BoundingVolume.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/JointConstraint.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/bwi_moveit_utils
)

### Generating Module File
_generate_module_lisp(bwi_moveit_utils
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/bwi_moveit_utils
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(bwi_moveit_utils_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(bwi_moveit_utils_generate_messages bwi_moveit_utils_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitWaypoint.srv" NAME_WE)
add_dependencies(bwi_moveit_utils_generate_messages_lisp _bwi_moveit_utils_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitCartesianPose.srv" NAME_WE)
add_dependencies(bwi_moveit_utils_generate_messages_lisp _bwi_moveit_utils_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitJointPose.srv" NAME_WE)
add_dependencies(bwi_moveit_utils_generate_messages_lisp _bwi_moveit_utils_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(bwi_moveit_utils_genlisp)
add_dependencies(bwi_moveit_utils_genlisp bwi_moveit_utils_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS bwi_moveit_utils_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages

### Generating Services
_generate_srv_nodejs(bwi_moveit_utils
  "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitWaypoint.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/Constraints.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/OrientationConstraint.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/PositionConstraint.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/VisibilityConstraint.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/BoundingVolume.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/JointConstraint.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/bwi_moveit_utils
)
_generate_srv_nodejs(bwi_moveit_utils
  "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitCartesianPose.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/Constraints.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/OrientationConstraint.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/PositionConstraint.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/VisibilityConstraint.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/BoundingVolume.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/JointConstraint.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/bwi_moveit_utils
)
_generate_srv_nodejs(bwi_moveit_utils
  "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitJointPose.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/Constraints.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/OrientationConstraint.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/PositionConstraint.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/VisibilityConstraint.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/BoundingVolume.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/JointConstraint.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/bwi_moveit_utils
)

### Generating Module File
_generate_module_nodejs(bwi_moveit_utils
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/bwi_moveit_utils
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(bwi_moveit_utils_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(bwi_moveit_utils_generate_messages bwi_moveit_utils_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitWaypoint.srv" NAME_WE)
add_dependencies(bwi_moveit_utils_generate_messages_nodejs _bwi_moveit_utils_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitCartesianPose.srv" NAME_WE)
add_dependencies(bwi_moveit_utils_generate_messages_nodejs _bwi_moveit_utils_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitJointPose.srv" NAME_WE)
add_dependencies(bwi_moveit_utils_generate_messages_nodejs _bwi_moveit_utils_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(bwi_moveit_utils_gennodejs)
add_dependencies(bwi_moveit_utils_gennodejs bwi_moveit_utils_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS bwi_moveit_utils_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages

### Generating Services
_generate_srv_py(bwi_moveit_utils
  "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitWaypoint.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/Constraints.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/OrientationConstraint.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/PositionConstraint.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/VisibilityConstraint.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/BoundingVolume.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/JointConstraint.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/bwi_moveit_utils
)
_generate_srv_py(bwi_moveit_utils
  "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitCartesianPose.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/Constraints.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/OrientationConstraint.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/PositionConstraint.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/VisibilityConstraint.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/BoundingVolume.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/JointConstraint.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/bwi_moveit_utils
)
_generate_srv_py(bwi_moveit_utils
  "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitJointPose.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/Constraints.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/OrientationConstraint.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/PositionConstraint.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/VisibilityConstraint.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/BoundingVolume.msg;/opt/ros/kinetic/share/moveit_msgs/cmake/../msg/JointConstraint.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/bwi_moveit_utils
)

### Generating Module File
_generate_module_py(bwi_moveit_utils
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/bwi_moveit_utils
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(bwi_moveit_utils_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(bwi_moveit_utils_generate_messages bwi_moveit_utils_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitWaypoint.srv" NAME_WE)
add_dependencies(bwi_moveit_utils_generate_messages_py _bwi_moveit_utils_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitCartesianPose.srv" NAME_WE)
add_dependencies(bwi_moveit_utils_generate_messages_py _bwi_moveit_utils_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/yohei/rl_ws/src/bwi_common/bwi_moveit_utils/srv/MoveitJointPose.srv" NAME_WE)
add_dependencies(bwi_moveit_utils_generate_messages_py _bwi_moveit_utils_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(bwi_moveit_utils_genpy)
add_dependencies(bwi_moveit_utils_genpy bwi_moveit_utils_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS bwi_moveit_utils_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/bwi_moveit_utils)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/bwi_moveit_utils
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET moveit_msgs_generate_messages_cpp)
  add_dependencies(bwi_moveit_utils_generate_messages_cpp moveit_msgs_generate_messages_cpp)
endif()
if(TARGET sensor_msgs_generate_messages_cpp)
  add_dependencies(bwi_moveit_utils_generate_messages_cpp sensor_msgs_generate_messages_cpp)
endif()
if(TARGET actionlib_msgs_generate_messages_cpp)
  add_dependencies(bwi_moveit_utils_generate_messages_cpp actionlib_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/bwi_moveit_utils)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/bwi_moveit_utils
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET moveit_msgs_generate_messages_eus)
  add_dependencies(bwi_moveit_utils_generate_messages_eus moveit_msgs_generate_messages_eus)
endif()
if(TARGET sensor_msgs_generate_messages_eus)
  add_dependencies(bwi_moveit_utils_generate_messages_eus sensor_msgs_generate_messages_eus)
endif()
if(TARGET actionlib_msgs_generate_messages_eus)
  add_dependencies(bwi_moveit_utils_generate_messages_eus actionlib_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/bwi_moveit_utils)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/bwi_moveit_utils
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET moveit_msgs_generate_messages_lisp)
  add_dependencies(bwi_moveit_utils_generate_messages_lisp moveit_msgs_generate_messages_lisp)
endif()
if(TARGET sensor_msgs_generate_messages_lisp)
  add_dependencies(bwi_moveit_utils_generate_messages_lisp sensor_msgs_generate_messages_lisp)
endif()
if(TARGET actionlib_msgs_generate_messages_lisp)
  add_dependencies(bwi_moveit_utils_generate_messages_lisp actionlib_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/bwi_moveit_utils)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/bwi_moveit_utils
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET moveit_msgs_generate_messages_nodejs)
  add_dependencies(bwi_moveit_utils_generate_messages_nodejs moveit_msgs_generate_messages_nodejs)
endif()
if(TARGET sensor_msgs_generate_messages_nodejs)
  add_dependencies(bwi_moveit_utils_generate_messages_nodejs sensor_msgs_generate_messages_nodejs)
endif()
if(TARGET actionlib_msgs_generate_messages_nodejs)
  add_dependencies(bwi_moveit_utils_generate_messages_nodejs actionlib_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/bwi_moveit_utils)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/bwi_moveit_utils\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/bwi_moveit_utils
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET moveit_msgs_generate_messages_py)
  add_dependencies(bwi_moveit_utils_generate_messages_py moveit_msgs_generate_messages_py)
endif()
if(TARGET sensor_msgs_generate_messages_py)
  add_dependencies(bwi_moveit_utils_generate_messages_py sensor_msgs_generate_messages_py)
endif()
if(TARGET actionlib_msgs_generate_messages_py)
  add_dependencies(bwi_moveit_utils_generate_messages_py actionlib_msgs_generate_messages_py)
endif()
