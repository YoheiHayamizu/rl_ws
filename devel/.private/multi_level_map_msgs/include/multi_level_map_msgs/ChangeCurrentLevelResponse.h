// Generated by gencpp from file multi_level_map_msgs/ChangeCurrentLevelResponse.msg
// DO NOT EDIT!


#ifndef MULTI_LEVEL_MAP_MSGS_MESSAGE_CHANGECURRENTLEVELRESPONSE_H
#define MULTI_LEVEL_MAP_MSGS_MESSAGE_CHANGECURRENTLEVELRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace multi_level_map_msgs
{
template <class ContainerAllocator>
struct ChangeCurrentLevelResponse_
{
  typedef ChangeCurrentLevelResponse_<ContainerAllocator> Type;

  ChangeCurrentLevelResponse_()
    : success(false)
    , error_message()  {
    }
  ChangeCurrentLevelResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , error_message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _error_message_type;
  _error_message_type error_message;





  typedef boost::shared_ptr< ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ChangeCurrentLevelResponse_

typedef ::multi_level_map_msgs::ChangeCurrentLevelResponse_<std::allocator<void> > ChangeCurrentLevelResponse;

typedef boost::shared_ptr< ::multi_level_map_msgs::ChangeCurrentLevelResponse > ChangeCurrentLevelResponsePtr;
typedef boost::shared_ptr< ::multi_level_map_msgs::ChangeCurrentLevelResponse const> ChangeCurrentLevelResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace multi_level_map_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'multi_level_map_msgs': ['/home/yohei/rl_ws/src/bwi_common/multi_level_map_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6fe914479ce03184a758c3f6990c928f";
  }

  static const char* value(const ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6fe914479ce03184ULL;
  static const uint64_t static_value2 = 0xa758c3f6990c928fULL;
};

template<class ContainerAllocator>
struct DataType< ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "multi_level_map_msgs/ChangeCurrentLevelResponse";
  }

  static const char* value(const ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n\
string error_message\n\
\n\
";
  }

  static const char* value(const ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.error_message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChangeCurrentLevelResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::multi_level_map_msgs::ChangeCurrentLevelResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "error_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.error_message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MULTI_LEVEL_MAP_MSGS_MESSAGE_CHANGECURRENTLEVELRESPONSE_H
