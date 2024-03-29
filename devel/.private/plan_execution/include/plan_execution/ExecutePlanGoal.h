// Generated by gencpp from file plan_execution/ExecutePlanGoal.msg
// DO NOT EDIT!


#ifndef PLAN_EXECUTION_MESSAGE_EXECUTEPLANGOAL_H
#define PLAN_EXECUTION_MESSAGE_EXECUTEPLANGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <plan_execution/AspRule.h>

namespace plan_execution
{
template <class ContainerAllocator>
struct ExecutePlanGoal_
{
  typedef ExecutePlanGoal_<ContainerAllocator> Type;

  ExecutePlanGoal_()
    : aspGoal()  {
    }
  ExecutePlanGoal_(const ContainerAllocator& _alloc)
    : aspGoal(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::plan_execution::AspRule_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::plan_execution::AspRule_<ContainerAllocator> >::other >  _aspGoal_type;
  _aspGoal_type aspGoal;





  typedef boost::shared_ptr< ::plan_execution::ExecutePlanGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::plan_execution::ExecutePlanGoal_<ContainerAllocator> const> ConstPtr;

}; // struct ExecutePlanGoal_

typedef ::plan_execution::ExecutePlanGoal_<std::allocator<void> > ExecutePlanGoal;

typedef boost::shared_ptr< ::plan_execution::ExecutePlanGoal > ExecutePlanGoalPtr;
typedef boost::shared_ptr< ::plan_execution::ExecutePlanGoal const> ExecutePlanGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::plan_execution::ExecutePlanGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::plan_execution::ExecutePlanGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace plan_execution

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'plan_execution': ['/home/yohei/rl_ws/src/bwi_common/plan_execution/msg', '/home/yohei/rl_ws/devel/.private/plan_execution/share/plan_execution/msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::plan_execution::ExecutePlanGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::plan_execution::ExecutePlanGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::plan_execution::ExecutePlanGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::plan_execution::ExecutePlanGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::plan_execution::ExecutePlanGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::plan_execution::ExecutePlanGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::plan_execution::ExecutePlanGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2c9cb40febc2ce81b7684fa64b2f8111";
  }

  static const char* value(const ::plan_execution::ExecutePlanGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2c9cb40febc2ce81ULL;
  static const uint64_t static_value2 = 0xb7684fa64b2f8111ULL;
};

template<class ContainerAllocator>
struct DataType< ::plan_execution::ExecutePlanGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "plan_execution/ExecutePlanGoal";
  }

  static const char* value(const ::plan_execution::ExecutePlanGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::plan_execution::ExecutePlanGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
AspRule[] aspGoal\n\
\n\
================================================================================\n\
MSG: plan_execution/AspRule\n\
AspFluent[] head\n\
AspFluent[] body\n\
\n\
================================================================================\n\
MSG: plan_execution/AspFluent\n\
string name\n\
string[] variables\n\
uint32 timeStep\n\
";
  }

  static const char* value(const ::plan_execution::ExecutePlanGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::plan_execution::ExecutePlanGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.aspGoal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ExecutePlanGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::plan_execution::ExecutePlanGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::plan_execution::ExecutePlanGoal_<ContainerAllocator>& v)
  {
    s << indent << "aspGoal[]" << std::endl;
    for (size_t i = 0; i < v.aspGoal.size(); ++i)
    {
      s << indent << "  aspGoal[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::plan_execution::AspRule_<ContainerAllocator> >::stream(s, indent + "    ", v.aspGoal[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLAN_EXECUTION_MESSAGE_EXECUTEPLANGOAL_H
