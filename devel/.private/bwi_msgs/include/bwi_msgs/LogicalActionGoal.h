// Generated by gencpp from file bwi_msgs/LogicalActionGoal.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_LOGICALACTIONGOAL_H
#define BWI_MSGS_MESSAGE_LOGICALACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <bwi_planning_common/PlannerAtom.h>

namespace bwi_msgs
{
template <class ContainerAllocator>
struct LogicalActionGoal_
{
  typedef LogicalActionGoal_<ContainerAllocator> Type;

  LogicalActionGoal_()
    : command()  {
    }
  LogicalActionGoal_(const ContainerAllocator& _alloc)
    : command(_alloc)  {
  (void)_alloc;
    }



   typedef  ::bwi_planning_common::PlannerAtom_<ContainerAllocator>  _command_type;
  _command_type command;





  typedef boost::shared_ptr< ::bwi_msgs::LogicalActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_msgs::LogicalActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct LogicalActionGoal_

typedef ::bwi_msgs::LogicalActionGoal_<std::allocator<void> > LogicalActionGoal;

typedef boost::shared_ptr< ::bwi_msgs::LogicalActionGoal > LogicalActionGoalPtr;
typedef boost::shared_ptr< ::bwi_msgs::LogicalActionGoal const> LogicalActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_msgs::LogicalActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_msgs::LogicalActionGoal_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::bwi_msgs::LogicalActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::LogicalActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::LogicalActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::LogicalActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::LogicalActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::LogicalActionGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_msgs::LogicalActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3b44d18631c1272d8bcb3e1f37b50d61";
  }

  static const char* value(const ::bwi_msgs::LogicalActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3b44d18631c1272dULL;
  static const uint64_t static_value2 = 0x8bcb3e1f37b50d61ULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_msgs::LogicalActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_msgs/LogicalActionGoal";
  }

  static const char* value(const ::bwi_msgs::LogicalActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_msgs::LogicalActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
bwi_planning_common/PlannerAtom command\n\
\n\
================================================================================\n\
MSG: bwi_planning_common/PlannerAtom\n\
string name\n\
string[] value\n\
";
  }

  static const char* value(const ::bwi_msgs::LogicalActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_msgs::LogicalActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LogicalActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_msgs::LogicalActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_msgs::LogicalActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    s << std::endl;
    Printer< ::bwi_planning_common::PlannerAtom_<ContainerAllocator> >::stream(s, indent + "  ", v.command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_MSGS_MESSAGE_LOGICALACTIONGOAL_H