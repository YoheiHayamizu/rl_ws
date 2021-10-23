// Generated by gencpp from file bwi_virtour/GetTourStateResponse.msg
// DO NOT EDIT!


#ifndef BWI_VIRTOUR_MESSAGE_GETTOURSTATERESPONSE_H
#define BWI_VIRTOUR_MESSAGE_GETTOURSTATERESPONSE_H


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
struct GetTourStateResponse_
{
  typedef GetTourStateResponse_<ContainerAllocator> Type;

  GetTourStateResponse_()
    : tourAllowed(false)
    , tourInProgress(false)
    , tourDuration(0)
    , tourStartTime(0)
    , lastPingTime(0)
    , tourLeader()  {
    }
  GetTourStateResponse_(const ContainerAllocator& _alloc)
    : tourAllowed(false)
    , tourInProgress(false)
    , tourDuration(0)
    , tourStartTime(0)
    , lastPingTime(0)
    , tourLeader(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _tourAllowed_type;
  _tourAllowed_type tourAllowed;

   typedef uint8_t _tourInProgress_type;
  _tourInProgress_type tourInProgress;

   typedef uint64_t _tourDuration_type;
  _tourDuration_type tourDuration;

   typedef uint64_t _tourStartTime_type;
  _tourStartTime_type tourStartTime;

   typedef uint64_t _lastPingTime_type;
  _lastPingTime_type lastPingTime;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _tourLeader_type;
  _tourLeader_type tourLeader;





  typedef boost::shared_ptr< ::bwi_virtour::GetTourStateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_virtour::GetTourStateResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetTourStateResponse_

typedef ::bwi_virtour::GetTourStateResponse_<std::allocator<void> > GetTourStateResponse;

typedef boost::shared_ptr< ::bwi_virtour::GetTourStateResponse > GetTourStateResponsePtr;
typedef boost::shared_ptr< ::bwi_virtour::GetTourStateResponse const> GetTourStateResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_virtour::GetTourStateResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_virtour::GetTourStateResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace bwi_virtour

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::bwi_virtour::GetTourStateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_virtour::GetTourStateResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_virtour::GetTourStateResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_virtour::GetTourStateResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_virtour::GetTourStateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_virtour::GetTourStateResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_virtour::GetTourStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "948457c50757084326687f7ddb2305ee";
  }

  static const char* value(const ::bwi_virtour::GetTourStateResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x948457c507570843ULL;
  static const uint64_t static_value2 = 0x26687f7ddb2305eeULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_virtour::GetTourStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_virtour/GetTourStateResponse";
  }

  static const char* value(const ::bwi_virtour::GetTourStateResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_virtour::GetTourStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool tourAllowed\n\
bool tourInProgress\n\
uint64 tourDuration\n\
uint64 tourStartTime\n\
uint64 lastPingTime\n\
string tourLeader\n\
\n\
";
  }

  static const char* value(const ::bwi_virtour::GetTourStateResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_virtour::GetTourStateResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.tourAllowed);
      stream.next(m.tourInProgress);
      stream.next(m.tourDuration);
      stream.next(m.tourStartTime);
      stream.next(m.lastPingTime);
      stream.next(m.tourLeader);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetTourStateResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_virtour::GetTourStateResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_virtour::GetTourStateResponse_<ContainerAllocator>& v)
  {
    s << indent << "tourAllowed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tourAllowed);
    s << indent << "tourInProgress: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tourInProgress);
    s << indent << "tourDuration: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.tourDuration);
    s << indent << "tourStartTime: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.tourStartTime);
    s << indent << "lastPingTime: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.lastPingTime);
    s << indent << "tourLeader: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.tourLeader);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_VIRTOUR_MESSAGE_GETTOURSTATERESPONSE_H
