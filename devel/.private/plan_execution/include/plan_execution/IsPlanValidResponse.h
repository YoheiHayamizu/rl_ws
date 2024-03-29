// Generated by gencpp from file plan_execution/IsPlanValidResponse.msg
// DO NOT EDIT!


#ifndef PLAN_EXECUTION_MESSAGE_ISPLANVALIDRESPONSE_H
#define PLAN_EXECUTION_MESSAGE_ISPLANVALIDRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace plan_execution
{
template <class ContainerAllocator>
struct IsPlanValidResponse_
{
  typedef IsPlanValidResponse_<ContainerAllocator> Type;

  IsPlanValidResponse_()
    : valid(false)  {
    }
  IsPlanValidResponse_(const ContainerAllocator& _alloc)
    : valid(false)  {
  (void)_alloc;
    }



   typedef uint8_t _valid_type;
  _valid_type valid;





  typedef boost::shared_ptr< ::plan_execution::IsPlanValidResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::plan_execution::IsPlanValidResponse_<ContainerAllocator> const> ConstPtr;

}; // struct IsPlanValidResponse_

typedef ::plan_execution::IsPlanValidResponse_<std::allocator<void> > IsPlanValidResponse;

typedef boost::shared_ptr< ::plan_execution::IsPlanValidResponse > IsPlanValidResponsePtr;
typedef boost::shared_ptr< ::plan_execution::IsPlanValidResponse const> IsPlanValidResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::plan_execution::IsPlanValidResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::plan_execution::IsPlanValidResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace plan_execution

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'plan_execution': ['/home/yohei/rl_ws/src/bwi_common/plan_execution/msg', '/home/yohei/rl_ws/devel/.private/plan_execution/share/plan_execution/msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::plan_execution::IsPlanValidResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::plan_execution::IsPlanValidResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::plan_execution::IsPlanValidResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::plan_execution::IsPlanValidResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::plan_execution::IsPlanValidResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::plan_execution::IsPlanValidResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::plan_execution::IsPlanValidResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a04c5033e7efda95fc3786e8d449c6e7";
  }

  static const char* value(const ::plan_execution::IsPlanValidResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa04c5033e7efda95ULL;
  static const uint64_t static_value2 = 0xfc3786e8d449c6e7ULL;
};

template<class ContainerAllocator>
struct DataType< ::plan_execution::IsPlanValidResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "plan_execution/IsPlanValidResponse";
  }

  static const char* value(const ::plan_execution::IsPlanValidResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::plan_execution::IsPlanValidResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool valid\n\
\n\
";
  }

  static const char* value(const ::plan_execution::IsPlanValidResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::plan_execution::IsPlanValidResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.valid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IsPlanValidResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::plan_execution::IsPlanValidResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::plan_execution::IsPlanValidResponse_<ContainerAllocator>& v)
  {
    s << indent << "valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.valid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLAN_EXECUTION_MESSAGE_ISPLANVALIDRESPONSE_H
