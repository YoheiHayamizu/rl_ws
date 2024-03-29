// Generated by gencpp from file bwi_msgs/ActionUpdateRequest.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_ACTIONUPDATEREQUEST_H
#define BWI_MSGS_MESSAGE_ACTIONUPDATEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <bwi_msgs/WeekTime.h>

namespace bwi_msgs
{
template <class ContainerAllocator>
struct ActionUpdateRequest_
{
  typedef ActionUpdateRequest_<ContainerAllocator> Type;

  ActionUpdateRequest_()
    : time()
    , current_location()
    , result(0)  {
    }
  ActionUpdateRequest_(const ContainerAllocator& _alloc)
    : time(_alloc)
    , current_location(_alloc)
    , result(0)  {
  (void)_alloc;
    }



   typedef  ::bwi_msgs::WeekTime_<ContainerAllocator>  _time_type;
  _time_type time;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _current_location_type;
  _current_location_type current_location;

   typedef int32_t _result_type;
  _result_type result;



  enum {
    QUESTION_ANSWERED = 0,
    QUESTION_DENIED = 1,
    QUESTION_TIMEOUT = 2,
    ARRIVED = 3,
    ARRIVAL_FAILURE = 4,
  };


  typedef boost::shared_ptr< ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ActionUpdateRequest_

typedef ::bwi_msgs::ActionUpdateRequest_<std::allocator<void> > ActionUpdateRequest;

typedef boost::shared_ptr< ::bwi_msgs::ActionUpdateRequest > ActionUpdateRequestPtr;
typedef boost::shared_ptr< ::bwi_msgs::ActionUpdateRequest const> ActionUpdateRequestConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9fe05e403268444079042cdaaf56e486";
  }

  static const char* value(const ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9fe05e4032684440ULL;
  static const uint64_t static_value2 = 0x79042cdaaf56e486ULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_msgs/ActionUpdateRequest";
  }

  static const char* value(const ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 QUESTION_ANSWERED = 0\n\
int32 QUESTION_DENIED = 1\n\
int32 QUESTION_TIMEOUT = 2\n\
int32 ARRIVED = 3\n\
int32 ARRIVAL_FAILURE = 4\n\
\n\
bwi_msgs/WeekTime time\n\
string current_location\n\
int32 result\n\
\n\
================================================================================\n\
MSG: bwi_msgs/WeekTime\n\
# Constants defining day of week\n\
int32 MONDAY=0\n\
int32 TUESDAY=1\n\
int32 WEDNESDAY=2\n\
int32 THURSDAY=3\n\
int32 FRIDAY=4\n\
int32 SATURDAY=5\n\
int32 SUNDAY=6\n\
\n\
int32 time_seconds\n\
int32 day_of_week\n\
";
  }

  static const char* value(const ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time);
      stream.next(m.current_location);
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ActionUpdateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_msgs::ActionUpdateRequest_<ContainerAllocator>& v)
  {
    s << indent << "time: ";
    s << std::endl;
    Printer< ::bwi_msgs::WeekTime_<ContainerAllocator> >::stream(s, indent + "  ", v.time);
    s << indent << "current_location: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.current_location);
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_MSGS_MESSAGE_ACTIONUPDATEREQUEST_H
