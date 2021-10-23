// Generated by gencpp from file bwi_services/DeliverMessageResponse.msg
// DO NOT EDIT!


#ifndef BWI_SERVICES_MESSAGE_DELIVERMESSAGERESPONSE_H
#define BWI_SERVICES_MESSAGE_DELIVERMESSAGERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace bwi_services
{
template <class ContainerAllocator>
struct DeliverMessageResponse_
{
  typedef DeliverMessageResponse_<ContainerAllocator> Type;

  DeliverMessageResponse_()
    : go_to_result(0)
    , speak_result(0)  {
    }
  DeliverMessageResponse_(const ContainerAllocator& _alloc)
    : go_to_result(0)
    , speak_result(0)  {
  (void)_alloc;
    }



   typedef int32_t _go_to_result_type;
  _go_to_result_type go_to_result;

   typedef int32_t _speak_result_type;
  _speak_result_type speak_result;





  typedef boost::shared_ptr< ::bwi_services::DeliverMessageResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_services::DeliverMessageResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DeliverMessageResponse_

typedef ::bwi_services::DeliverMessageResponse_<std::allocator<void> > DeliverMessageResponse;

typedef boost::shared_ptr< ::bwi_services::DeliverMessageResponse > DeliverMessageResponsePtr;
typedef boost::shared_ptr< ::bwi_services::DeliverMessageResponse const> DeliverMessageResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_services::DeliverMessageResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_services::DeliverMessageResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace bwi_services

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::bwi_services::DeliverMessageResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_services::DeliverMessageResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_services::DeliverMessageResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_services::DeliverMessageResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_services::DeliverMessageResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_services::DeliverMessageResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_services::DeliverMessageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "534a0d7f199e6c88fd374d43944b6aad";
  }

  static const char* value(const ::bwi_services::DeliverMessageResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x534a0d7f199e6c88ULL;
  static const uint64_t static_value2 = 0xfd374d43944b6aadULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_services::DeliverMessageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_services/DeliverMessageResponse";
  }

  static const char* value(const ::bwi_services::DeliverMessageResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_services::DeliverMessageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 go_to_result\n\
int32 speak_result\n\
\n\
";
  }

  static const char* value(const ::bwi_services::DeliverMessageResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_services::DeliverMessageResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.go_to_result);
      stream.next(m.speak_result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DeliverMessageResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_services::DeliverMessageResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_services::DeliverMessageResponse_<ContainerAllocator>& v)
  {
    s << indent << "go_to_result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.go_to_result);
    s << indent << "speak_result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.speak_result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_SERVICES_MESSAGE_DELIVERMESSAGERESPONSE_H
