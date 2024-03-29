// Generated by gencpp from file segway_msgs/Configuration.msg
// DO NOT EDIT!


#ifndef SEGWAY_MSGS_MESSAGE_CONFIGURATION_H
#define SEGWAY_MSGS_MESSAGE_CONFIGURATION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace segway_msgs
{
template <class ContainerAllocator>
struct Configuration_
{
  typedef Configuration_<ContainerAllocator> Type;

  Configuration_()
    : header()
    , teleop_vel_limit_mps(0.0)
    , teleop_accel_limit_mps2(0.0)
    , teleop_yaw_rate_limit_rps(0.0)
    , teleop_yaw_accel_limit_rps2(0.0)
    , vel_limit_mps(0.0)
    , accel_limit_mps2(0.0)
    , decel_limit_mps2(0.0)
    , dtz_decel_limit_mps2(0.0)
    , lateral_accel_limit_mps2(0.0)
    , yaw_rate_limit_rps(0.0)
    , yaw_accel_limit_rps2(0.0)
    , tire_diameter_m(0.0)
    , wheelbase_length_m(0.0)
    , omni_yaw_correction_factor(0.0)
    , omni_straffe_correction_factor(0.0)
    , wheel_track_width_m(0.0)
    , gear_ratio(0.0)
    , config_bitmap(0)
    , eth_ip_address()
    , eth_port_number(0)
    , eth_subnet_mask()
    , eth_gateway()  {
    }
  Configuration_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , teleop_vel_limit_mps(0.0)
    , teleop_accel_limit_mps2(0.0)
    , teleop_yaw_rate_limit_rps(0.0)
    , teleop_yaw_accel_limit_rps2(0.0)
    , vel_limit_mps(0.0)
    , accel_limit_mps2(0.0)
    , decel_limit_mps2(0.0)
    , dtz_decel_limit_mps2(0.0)
    , lateral_accel_limit_mps2(0.0)
    , yaw_rate_limit_rps(0.0)
    , yaw_accel_limit_rps2(0.0)
    , tire_diameter_m(0.0)
    , wheelbase_length_m(0.0)
    , omni_yaw_correction_factor(0.0)
    , omni_straffe_correction_factor(0.0)
    , wheel_track_width_m(0.0)
    , gear_ratio(0.0)
    , config_bitmap(0)
    , eth_ip_address(_alloc)
    , eth_port_number(0)
    , eth_subnet_mask(_alloc)
    , eth_gateway(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _teleop_vel_limit_mps_type;
  _teleop_vel_limit_mps_type teleop_vel_limit_mps;

   typedef float _teleop_accel_limit_mps2_type;
  _teleop_accel_limit_mps2_type teleop_accel_limit_mps2;

   typedef float _teleop_yaw_rate_limit_rps_type;
  _teleop_yaw_rate_limit_rps_type teleop_yaw_rate_limit_rps;

   typedef float _teleop_yaw_accel_limit_rps2_type;
  _teleop_yaw_accel_limit_rps2_type teleop_yaw_accel_limit_rps2;

   typedef float _vel_limit_mps_type;
  _vel_limit_mps_type vel_limit_mps;

   typedef float _accel_limit_mps2_type;
  _accel_limit_mps2_type accel_limit_mps2;

   typedef float _decel_limit_mps2_type;
  _decel_limit_mps2_type decel_limit_mps2;

   typedef float _dtz_decel_limit_mps2_type;
  _dtz_decel_limit_mps2_type dtz_decel_limit_mps2;

   typedef float _lateral_accel_limit_mps2_type;
  _lateral_accel_limit_mps2_type lateral_accel_limit_mps2;

   typedef float _yaw_rate_limit_rps_type;
  _yaw_rate_limit_rps_type yaw_rate_limit_rps;

   typedef float _yaw_accel_limit_rps2_type;
  _yaw_accel_limit_rps2_type yaw_accel_limit_rps2;

   typedef float _tire_diameter_m_type;
  _tire_diameter_m_type tire_diameter_m;

   typedef float _wheelbase_length_m_type;
  _wheelbase_length_m_type wheelbase_length_m;

   typedef float _omni_yaw_correction_factor_type;
  _omni_yaw_correction_factor_type omni_yaw_correction_factor;

   typedef float _omni_straffe_correction_factor_type;
  _omni_straffe_correction_factor_type omni_straffe_correction_factor;

   typedef float _wheel_track_width_m_type;
  _wheel_track_width_m_type wheel_track_width_m;

   typedef float _gear_ratio_type;
  _gear_ratio_type gear_ratio;

   typedef uint32_t _config_bitmap_type;
  _config_bitmap_type config_bitmap;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _eth_ip_address_type;
  _eth_ip_address_type eth_ip_address;

   typedef uint32_t _eth_port_number_type;
  _eth_port_number_type eth_port_number;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _eth_subnet_mask_type;
  _eth_subnet_mask_type eth_subnet_mask;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _eth_gateway_type;
  _eth_gateway_type eth_gateway;





  typedef boost::shared_ptr< ::segway_msgs::Configuration_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::segway_msgs::Configuration_<ContainerAllocator> const> ConstPtr;

}; // struct Configuration_

typedef ::segway_msgs::Configuration_<std::allocator<void> > Configuration;

typedef boost::shared_ptr< ::segway_msgs::Configuration > ConfigurationPtr;
typedef boost::shared_ptr< ::segway_msgs::Configuration const> ConfigurationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::segway_msgs::Configuration_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::segway_msgs::Configuration_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace segway_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'segway_msgs': ['/home/yohei/rl_ws/src/segway_v3/segway_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::segway_msgs::Configuration_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::segway_msgs::Configuration_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::segway_msgs::Configuration_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::segway_msgs::Configuration_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::segway_msgs::Configuration_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::segway_msgs::Configuration_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::segway_msgs::Configuration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "03157f9e1c3a782af2e296a4e475e4af";
  }

  static const char* value(const ::segway_msgs::Configuration_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x03157f9e1c3a782aULL;
  static const uint64_t static_value2 = 0xf2e296a4e475e4afULL;
};

template<class ContainerAllocator>
struct DataType< ::segway_msgs::Configuration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "segway_msgs/Configuration";
  }

  static const char* value(const ::segway_msgs::Configuration_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::segway_msgs::Configuration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float32 teleop_vel_limit_mps\n\
float32 teleop_accel_limit_mps2\n\
float32 teleop_yaw_rate_limit_rps\n\
float32 teleop_yaw_accel_limit_rps2\n\
float32 vel_limit_mps\n\
float32 accel_limit_mps2\n\
float32 decel_limit_mps2\n\
float32 dtz_decel_limit_mps2\n\
float32 lateral_accel_limit_mps2\n\
float32 yaw_rate_limit_rps\n\
float32 yaw_accel_limit_rps2\n\
float32 tire_diameter_m\n\
float32 wheelbase_length_m\n\
float32 omni_yaw_correction_factor\n\
float32 omni_straffe_correction_factor\n\
float32 wheel_track_width_m\n\
float32 gear_ratio\n\
uint32 config_bitmap\n\
string eth_ip_address\n\
uint32 eth_port_number\n\
string eth_subnet_mask\n\
string eth_gateway\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::segway_msgs::Configuration_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::segway_msgs::Configuration_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.teleop_vel_limit_mps);
      stream.next(m.teleop_accel_limit_mps2);
      stream.next(m.teleop_yaw_rate_limit_rps);
      stream.next(m.teleop_yaw_accel_limit_rps2);
      stream.next(m.vel_limit_mps);
      stream.next(m.accel_limit_mps2);
      stream.next(m.decel_limit_mps2);
      stream.next(m.dtz_decel_limit_mps2);
      stream.next(m.lateral_accel_limit_mps2);
      stream.next(m.yaw_rate_limit_rps);
      stream.next(m.yaw_accel_limit_rps2);
      stream.next(m.tire_diameter_m);
      stream.next(m.wheelbase_length_m);
      stream.next(m.omni_yaw_correction_factor);
      stream.next(m.omni_straffe_correction_factor);
      stream.next(m.wheel_track_width_m);
      stream.next(m.gear_ratio);
      stream.next(m.config_bitmap);
      stream.next(m.eth_ip_address);
      stream.next(m.eth_port_number);
      stream.next(m.eth_subnet_mask);
      stream.next(m.eth_gateway);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Configuration_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::segway_msgs::Configuration_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::segway_msgs::Configuration_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "teleop_vel_limit_mps: ";
    Printer<float>::stream(s, indent + "  ", v.teleop_vel_limit_mps);
    s << indent << "teleop_accel_limit_mps2: ";
    Printer<float>::stream(s, indent + "  ", v.teleop_accel_limit_mps2);
    s << indent << "teleop_yaw_rate_limit_rps: ";
    Printer<float>::stream(s, indent + "  ", v.teleop_yaw_rate_limit_rps);
    s << indent << "teleop_yaw_accel_limit_rps2: ";
    Printer<float>::stream(s, indent + "  ", v.teleop_yaw_accel_limit_rps2);
    s << indent << "vel_limit_mps: ";
    Printer<float>::stream(s, indent + "  ", v.vel_limit_mps);
    s << indent << "accel_limit_mps2: ";
    Printer<float>::stream(s, indent + "  ", v.accel_limit_mps2);
    s << indent << "decel_limit_mps2: ";
    Printer<float>::stream(s, indent + "  ", v.decel_limit_mps2);
    s << indent << "dtz_decel_limit_mps2: ";
    Printer<float>::stream(s, indent + "  ", v.dtz_decel_limit_mps2);
    s << indent << "lateral_accel_limit_mps2: ";
    Printer<float>::stream(s, indent + "  ", v.lateral_accel_limit_mps2);
    s << indent << "yaw_rate_limit_rps: ";
    Printer<float>::stream(s, indent + "  ", v.yaw_rate_limit_rps);
    s << indent << "yaw_accel_limit_rps2: ";
    Printer<float>::stream(s, indent + "  ", v.yaw_accel_limit_rps2);
    s << indent << "tire_diameter_m: ";
    Printer<float>::stream(s, indent + "  ", v.tire_diameter_m);
    s << indent << "wheelbase_length_m: ";
    Printer<float>::stream(s, indent + "  ", v.wheelbase_length_m);
    s << indent << "omni_yaw_correction_factor: ";
    Printer<float>::stream(s, indent + "  ", v.omni_yaw_correction_factor);
    s << indent << "omni_straffe_correction_factor: ";
    Printer<float>::stream(s, indent + "  ", v.omni_straffe_correction_factor);
    s << indent << "wheel_track_width_m: ";
    Printer<float>::stream(s, indent + "  ", v.wheel_track_width_m);
    s << indent << "gear_ratio: ";
    Printer<float>::stream(s, indent + "  ", v.gear_ratio);
    s << indent << "config_bitmap: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.config_bitmap);
    s << indent << "eth_ip_address: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.eth_ip_address);
    s << indent << "eth_port_number: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.eth_port_number);
    s << indent << "eth_subnet_mask: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.eth_subnet_mask);
    s << indent << "eth_gateway: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.eth_gateway);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEGWAY_MSGS_MESSAGE_CONFIGURATION_H
