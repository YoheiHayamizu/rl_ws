// Generated by gencpp from file bwi_msgs/LEDActionResult.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_LEDACTIONRESULT_H
#define BWI_MSGS_MESSAGE_LEDACTIONRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace bwi_msgs
{
template <class ContainerAllocator>
struct LEDActionResult_
{
  typedef LEDActionResult_<ContainerAllocator> Type;

  LEDActionResult_()
    : result_type(0)  {
    }
  LEDActionResult_(const ContainerAllocator& _alloc)
    : result_type(0)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type_type;
  _result_type_type result_type;



  enum {
    SUCCESS = 1u,
    SHUTDOWN = 2u,
    PREEMPTED = 3u,
    FAILURE = 4u,
  };


  typedef boost::shared_ptr< ::bwi_msgs::LEDActionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_msgs::LEDActionResult_<ContainerAllocator> const> ConstPtr;

}; // struct LEDActionResult_

typedef ::bwi_msgs::LEDActionResult_<std::allocator<void> > LEDActionResult;

typedef boost::shared_ptr< ::bwi_msgs::LEDActionResult > LEDActionResultPtr;
typedef boost::shared_ptr< ::bwi_msgs::LEDActionResult const> LEDActionResultConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_msgs::LEDActionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_msgs::LEDActionResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace bwi_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'bwi_msgs': ['/home/yohei/rl_ws/src/bwi_common/bwi_msgs/msg', '/home/yohei/rl_ws/devel/.private/bwi_msgs/share/bwi_msgs/msg'], 'bwi_planning_common': ['/home/yohei/rl_ws/src/bwi_common/bwi_planning_common/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::LEDActionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::LEDActionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::LEDActionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::LEDActionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::LEDActionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::LEDActionResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_msgs::LEDActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f94ab4126b134ed382c1614cabfab694";
  }

  static const char* value(const ::bwi_msgs::LEDActionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf94ab4126b134ed3ULL;
  static const uint64_t static_value2 = 0x82c1614cabfab694ULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_msgs::LEDActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_msgs/LEDActionResult";
  }

  static const char* value(const ::bwi_msgs::LEDActionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_msgs::LEDActionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# LED Action Result Type\n\
\n\
# Action Variables\n\
uint8 SUCCESS = 1\n\
uint8 SHUTDOWN = 2\n\
uint8 PREEMPTED = 3\n\
uint8 FAILURE = 4\n\
\n\
# Result type returned from LED Control action\n\
\n\
uint8 result_type\n\
";
  }

  static const char* value(const ::bwi_msgs::LEDActionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_msgs::LEDActionResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LEDActionResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_msgs::LEDActionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_msgs::LEDActionResult_<ContainerAllocator>& v)
  {
    s << indent << "result_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result_type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_MSGS_MESSAGE_LEDACTIONRESULT_H
