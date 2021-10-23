// Generated by gencpp from file bwi_msgs/LocationAction.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_LOCATIONACTION_H
#define BWI_MSGS_MESSAGE_LOCATIONACTION_H

#include <ros/service_traits.h>


#include <bwi_msgs/LocationActionRequest.h>
#include <bwi_msgs/LocationActionResponse.h>


namespace bwi_msgs
{

struct LocationAction
{

typedef LocationActionRequest Request;
typedef LocationActionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct LocationAction
} // namespace bwi_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::bwi_msgs::LocationAction > {
  static const char* value()
  {
    return "0dde773e38870fb29fdf55706196344e";
  }

  static const char* value(const ::bwi_msgs::LocationAction&) { return value(); }
};

template<>
struct DataType< ::bwi_msgs::LocationAction > {
  static const char* value()
  {
    return "bwi_msgs/LocationAction";
  }

  static const char* value(const ::bwi_msgs::LocationAction&) { return value(); }
};


// service_traits::MD5Sum< ::bwi_msgs::LocationActionRequest> should match 
// service_traits::MD5Sum< ::bwi_msgs::LocationAction > 
template<>
struct MD5Sum< ::bwi_msgs::LocationActionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::bwi_msgs::LocationAction >::value();
  }
  static const char* value(const ::bwi_msgs::LocationActionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::bwi_msgs::LocationActionRequest> should match 
// service_traits::DataType< ::bwi_msgs::LocationAction > 
template<>
struct DataType< ::bwi_msgs::LocationActionRequest>
{
  static const char* value()
  {
    return DataType< ::bwi_msgs::LocationAction >::value();
  }
  static const char* value(const ::bwi_msgs::LocationActionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::bwi_msgs::LocationActionResponse> should match 
// service_traits::MD5Sum< ::bwi_msgs::LocationAction > 
template<>
struct MD5Sum< ::bwi_msgs::LocationActionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::bwi_msgs::LocationAction >::value();
  }
  static const char* value(const ::bwi_msgs::LocationActionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::bwi_msgs::LocationActionResponse> should match 
// service_traits::DataType< ::bwi_msgs::LocationAction > 
template<>
struct DataType< ::bwi_msgs::LocationActionResponse>
{
  static const char* value()
  {
    return DataType< ::bwi_msgs::LocationAction >::value();
  }
  static const char* value(const ::bwi_msgs::LocationActionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BWI_MSGS_MESSAGE_LOCATIONACTION_H
