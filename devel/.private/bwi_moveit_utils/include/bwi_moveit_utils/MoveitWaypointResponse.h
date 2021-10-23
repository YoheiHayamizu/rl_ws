// Generated by gencpp from file bwi_moveit_utils/MoveitWaypointResponse.msg
// DO NOT EDIT!


#ifndef BWI_MOVEIT_UTILS_MESSAGE_MOVEITWAYPOINTRESPONSE_H
#define BWI_MOVEIT_UTILS_MESSAGE_MOVEITWAYPOINTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace bwi_moveit_utils
{
template <class ContainerAllocator>
struct MoveitWaypointResponse_
{
  typedef MoveitWaypointResponse_<ContainerAllocator> Type;

  MoveitWaypointResponse_()
    : completed(false)  {
    }
  MoveitWaypointResponse_(const ContainerAllocator& _alloc)
    : completed(false)  {
  (void)_alloc;
    }



   typedef uint8_t _completed_type;
  _completed_type completed;





  typedef boost::shared_ptr< ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator> const> ConstPtr;

}; // struct MoveitWaypointResponse_

typedef ::bwi_moveit_utils::MoveitWaypointResponse_<std::allocator<void> > MoveitWaypointResponse;

typedef boost::shared_ptr< ::bwi_moveit_utils::MoveitWaypointResponse > MoveitWaypointResponsePtr;
typedef boost::shared_ptr< ::bwi_moveit_utils::MoveitWaypointResponse const> MoveitWaypointResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace bwi_moveit_utils

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/kinetic/share/shape_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'moveit_msgs': ['/opt/ros/kinetic/share/moveit_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/kinetic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/kinetic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9e58faa17a4877a1efc0e251b503c53b";
  }

  static const char* value(const ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9e58faa17a4877a1ULL;
  static const uint64_t static_value2 = 0xefc0e251b503c53bULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_moveit_utils/MoveitWaypointResponse";
  }

  static const char* value(const ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool completed\n\
\n\
";
  }

  static const char* value(const ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.completed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveitWaypointResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_moveit_utils::MoveitWaypointResponse_<ContainerAllocator>& v)
  {
    s << indent << "completed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.completed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_MOVEIT_UTILS_MESSAGE_MOVEITWAYPOINTRESPONSE_H