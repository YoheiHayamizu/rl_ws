// Generated by gencpp from file bwi_msgs/LEDControlResult.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_LEDCONTROLRESULT_H
#define BWI_MSGS_MESSAGE_LEDCONTROLRESULT_H


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
struct LEDControlResult_
{
  typedef LEDControlResult_<ContainerAllocator> Type;

  LEDControlResult_()
    : result(0)
    , status()  {
    }
  LEDControlResult_(const ContainerAllocator& _alloc)
    : result(0)
    , status(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::bwi_msgs::LEDControlResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_msgs::LEDControlResult_<ContainerAllocator> const> ConstPtr;

}; // struct LEDControlResult_

typedef ::bwi_msgs::LEDControlResult_<std::allocator<void> > LEDControlResult;

typedef boost::shared_ptr< ::bwi_msgs::LEDControlResult > LEDControlResultPtr;
typedef boost::shared_ptr< ::bwi_msgs::LEDControlResult const> LEDControlResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_msgs::LEDControlResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_msgs::LEDControlResult_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::bwi_msgs::LEDControlResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::LEDControlResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::LEDControlResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::LEDControlResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::LEDControlResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::LEDControlResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_msgs::LEDControlResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fdb8a9280351dc5483b6dd4488989352";
  }

  static const char* value(const ::bwi_msgs::LEDControlResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfdb8a9280351dc54ULL;
  static const uint64_t static_value2 = 0x83b6dd4488989352ULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_msgs::LEDControlResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_msgs/LEDControlResult";
  }

  static const char* value(const ::bwi_msgs::LEDControlResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_msgs::LEDControlResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result definition\n\
uint8 result\n\
string status\n\
";
  }

  static const char* value(const ::bwi_msgs::LEDControlResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_msgs::LEDControlResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LEDControlResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_msgs::LEDControlResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_msgs::LEDControlResult_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
    s << indent << "status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_MSGS_MESSAGE_LEDCONTROLRESULT_H