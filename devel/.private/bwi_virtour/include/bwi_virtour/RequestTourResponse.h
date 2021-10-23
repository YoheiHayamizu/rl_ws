// Generated by gencpp from file bwi_virtour/RequestTourResponse.msg
// DO NOT EDIT!


#ifndef BWI_VIRTOUR_MESSAGE_REQUESTTOURRESPONSE_H
#define BWI_VIRTOUR_MESSAGE_REQUESTTOURRESPONSE_H


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
struct RequestTourResponse_
{
  typedef RequestTourResponse_<ContainerAllocator> Type;

  RequestTourResponse_()
    : startTime(0)
    , result(0)  {
    }
  RequestTourResponse_(const ContainerAllocator& _alloc)
    : startTime(0)
    , result(0)  {
  (void)_alloc;
    }



   typedef uint64_t _startTime_type;
  _startTime_type startTime;

   typedef int32_t _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::bwi_virtour::RequestTourResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_virtour::RequestTourResponse_<ContainerAllocator> const> ConstPtr;

}; // struct RequestTourResponse_

typedef ::bwi_virtour::RequestTourResponse_<std::allocator<void> > RequestTourResponse;

typedef boost::shared_ptr< ::bwi_virtour::RequestTourResponse > RequestTourResponsePtr;
typedef boost::shared_ptr< ::bwi_virtour::RequestTourResponse const> RequestTourResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_virtour::RequestTourResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_virtour::RequestTourResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::bwi_virtour::RequestTourResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_virtour::RequestTourResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_virtour::RequestTourResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_virtour::RequestTourResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_virtour::RequestTourResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_virtour::RequestTourResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_virtour::RequestTourResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "caedefd7fa25aef12b36c8a22b21c499";
  }

  static const char* value(const ::bwi_virtour::RequestTourResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcaedefd7fa25aef1ULL;
  static const uint64_t static_value2 = 0x2b36c8a22b21c499ULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_virtour::RequestTourResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_virtour/RequestTourResponse";
  }

  static const char* value(const ::bwi_virtour::RequestTourResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_virtour::RequestTourResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 startTime\n\
int32 result\n\
\n\
";
  }

  static const char* value(const ::bwi_virtour::RequestTourResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_virtour::RequestTourResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.startTime);
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RequestTourResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_virtour::RequestTourResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_virtour::RequestTourResponse_<ContainerAllocator>& v)
  {
    s << indent << "startTime: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.startTime);
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_VIRTOUR_MESSAGE_REQUESTTOURRESPONSE_H