// Generated by gencpp from file bwi_msgs/AvailableRobotArray.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_AVAILABLEROBOTARRAY_H
#define BWI_MSGS_MESSAGE_AVAILABLEROBOTARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <bwi_msgs/AvailableRobot.h>

namespace bwi_msgs
{
template <class ContainerAllocator>
struct AvailableRobotArray_
{
  typedef AvailableRobotArray_<ContainerAllocator> Type;

  AvailableRobotArray_()
    : robots()  {
    }
  AvailableRobotArray_(const ContainerAllocator& _alloc)
    : robots(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::bwi_msgs::AvailableRobot_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::bwi_msgs::AvailableRobot_<ContainerAllocator> >::other >  _robots_type;
  _robots_type robots;





  typedef boost::shared_ptr< ::bwi_msgs::AvailableRobotArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_msgs::AvailableRobotArray_<ContainerAllocator> const> ConstPtr;

}; // struct AvailableRobotArray_

typedef ::bwi_msgs::AvailableRobotArray_<std::allocator<void> > AvailableRobotArray;

typedef boost::shared_ptr< ::bwi_msgs::AvailableRobotArray > AvailableRobotArrayPtr;
typedef boost::shared_ptr< ::bwi_msgs::AvailableRobotArray const> AvailableRobotArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_msgs::AvailableRobotArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_msgs::AvailableRobotArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace bwi_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'bwi_msgs': ['/home/yohei/rl_ws/src/bwi_common/bwi_msgs/msg', '/home/yohei/rl_ws/devel/.private/bwi_msgs/share/bwi_msgs/msg'], 'bwi_planning_common': ['/home/yohei/rl_ws/src/bwi_common/bwi_planning_common/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::AvailableRobotArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::AvailableRobotArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::AvailableRobotArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::AvailableRobotArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::AvailableRobotArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::AvailableRobotArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_msgs::AvailableRobotArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b0231c0f851faa92decfde91f5d24b51";
  }

  static const char* value(const ::bwi_msgs::AvailableRobotArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb0231c0f851faa92ULL;
  static const uint64_t static_value2 = 0xdecfde91f5d24b51ULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_msgs::AvailableRobotArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_msgs/AvailableRobotArray";
  }

  static const char* value(const ::bwi_msgs::AvailableRobotArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_msgs::AvailableRobotArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "AvailableRobot[] robots\n\
\n\
================================================================================\n\
MSG: bwi_msgs/AvailableRobot\n\
# The current list of robots supported in the BWI Ecosystem. In an ideal world, this functionality would be replaced\n\
# by the capabilities framework.\n\
\n\
int32 SEGBOT = 1\n\
int32 SEGBOT_ARM = 2\n\
int32 TURTLEBOT = 3\n\
\n\
string name\n\
int32 type\n\
";
  }

  static const char* value(const ::bwi_msgs::AvailableRobotArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_msgs::AvailableRobotArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.robots);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AvailableRobotArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_msgs::AvailableRobotArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_msgs::AvailableRobotArray_<ContainerAllocator>& v)
  {
    s << indent << "robots[]" << std::endl;
    for (size_t i = 0; i < v.robots.size(); ++i)
    {
      s << indent << "  robots[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::bwi_msgs::AvailableRobot_<ContainerAllocator> >::stream(s, indent + "    ", v.robots[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_MSGS_MESSAGE_AVAILABLEROBOTARRAY_H
