// Generated by gencpp from file bwi_virtour/PingTourResponse.msg
// DO NOT EDIT!


#ifndef BWI_VIRTOUR_MESSAGE_PINGTOURRESPONSE_H
#define BWI_VIRTOUR_MESSAGE_PINGTOURRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace bwi_virtour
{
template <class ContainerAllocator>
struct PingTourResponse_
{
  typedef PingTourResponse_<ContainerAllocator> Type;

  PingTourResponse_()
    : result(0)  {
    }
  PingTourResponse_(const ContainerAllocator& _alloc)
    : result(0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::bwi_virtour::PingTourResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_virtour::PingTourResponse_<ContainerAllocator> const> ConstPtr;

}; // struct PingTourResponse_

typedef ::bwi_virtour::PingTourResponse_<std::allocator<void> > PingTourResponse;

typedef boost::shared_ptr< ::bwi_virtour::PingTourResponse > PingTourResponsePtr;
typedef boost::shared_ptr< ::bwi_virtour::PingTourResponse const> PingTourResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_virtour::PingTourResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_virtour::PingTourResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace bwi_virtour

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::bwi_virtour::PingTourResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_virtour::PingTourResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_virtour::PingTourResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_virtour::PingTourResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_virtour::PingTourResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_virtour::PingTourResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_virtour::PingTourResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const ::bwi_virtour::PingTourResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x034a8e20d6a30666ULL;
  static const uint64_t static_value2 = 0x5e3a5b340fab3f09ULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_virtour::PingTourResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_virtour/PingTourResponse";
  }

  static const char* value(const ::bwi_virtour::PingTourResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_virtour::PingTourResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n\
\n\
";
  }

  static const char* value(const ::bwi_virtour::PingTourResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_virtour::PingTourResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PingTourResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_virtour::PingTourResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_virtour::PingTourResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_VIRTOUR_MESSAGE_PINGTOURRESPONSE_H
