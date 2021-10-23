// Generated by gencpp from file bwi_perception/GetPCDRequest.msg
// DO NOT EDIT!


#ifndef BWI_PERCEPTION_MESSAGE_GETPCDREQUEST_H
#define BWI_PERCEPTION_MESSAGE_GETPCDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace bwi_perception
{
template <class ContainerAllocator>
struct GetPCDRequest_
{
  typedef GetPCDRequest_<ContainerAllocator> Type;

  GetPCDRequest_()
    : generalImageFilePath()  {
    }
  GetPCDRequest_(const ContainerAllocator& _alloc)
    : generalImageFilePath(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _generalImageFilePath_type;
  _generalImageFilePath_type generalImageFilePath;





  typedef boost::shared_ptr< ::bwi_perception::GetPCDRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_perception::GetPCDRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetPCDRequest_

typedef ::bwi_perception::GetPCDRequest_<std::allocator<void> > GetPCDRequest;

typedef boost::shared_ptr< ::bwi_perception::GetPCDRequest > GetPCDRequestPtr;
typedef boost::shared_ptr< ::bwi_perception::GetPCDRequest const> GetPCDRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_perception::GetPCDRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_perception::GetPCDRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace bwi_perception

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/kinetic/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::bwi_perception::GetPCDRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_perception::GetPCDRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_perception::GetPCDRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_perception::GetPCDRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_perception::GetPCDRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_perception::GetPCDRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_perception::GetPCDRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cdca2b60c53a4d63fd5769c161d1c480";
  }

  static const char* value(const ::bwi_perception::GetPCDRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcdca2b60c53a4d63ULL;
  static const uint64_t static_value2 = 0xfd5769c161d1c480ULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_perception::GetPCDRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_perception/GetPCDRequest";
  }

  static const char* value(const ::bwi_perception::GetPCDRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_perception::GetPCDRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string generalImageFilePath\n\
";
  }

  static const char* value(const ::bwi_perception::GetPCDRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_perception::GetPCDRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.generalImageFilePath);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetPCDRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_perception::GetPCDRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_perception::GetPCDRequest_<ContainerAllocator>& v)
  {
    s << indent << "generalImageFilePath: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.generalImageFilePath);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_PERCEPTION_MESSAGE_GETPCDREQUEST_H
