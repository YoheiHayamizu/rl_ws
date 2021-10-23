// Generated by gencpp from file bwi_msgs/GetNextImage.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_GETNEXTIMAGE_H
#define BWI_MSGS_MESSAGE_GETNEXTIMAGE_H

#include <ros/service_traits.h>


#include <bwi_msgs/GetNextImageRequest.h>
#include <bwi_msgs/GetNextImageResponse.h>


namespace bwi_msgs
{

struct GetNextImage
{

typedef GetNextImageRequest Request;
typedef GetNextImageResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetNextImage
} // namespace bwi_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::bwi_msgs::GetNextImage > {
  static const char* value()
  {
    return "060ebf3a330350842f7587d9759a9de4";
  }

  static const char* value(const ::bwi_msgs::GetNextImage&) { return value(); }
};

template<>
struct DataType< ::bwi_msgs::GetNextImage > {
  static const char* value()
  {
    return "bwi_msgs/GetNextImage";
  }

  static const char* value(const ::bwi_msgs::GetNextImage&) { return value(); }
};


// service_traits::MD5Sum< ::bwi_msgs::GetNextImageRequest> should match 
// service_traits::MD5Sum< ::bwi_msgs::GetNextImage > 
template<>
struct MD5Sum< ::bwi_msgs::GetNextImageRequest>
{
  static const char* value()
  {
    return MD5Sum< ::bwi_msgs::GetNextImage >::value();
  }
  static const char* value(const ::bwi_msgs::GetNextImageRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::bwi_msgs::GetNextImageRequest> should match 
// service_traits::DataType< ::bwi_msgs::GetNextImage > 
template<>
struct DataType< ::bwi_msgs::GetNextImageRequest>
{
  static const char* value()
  {
    return DataType< ::bwi_msgs::GetNextImage >::value();
  }
  static const char* value(const ::bwi_msgs::GetNextImageRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::bwi_msgs::GetNextImageResponse> should match 
// service_traits::MD5Sum< ::bwi_msgs::GetNextImage > 
template<>
struct MD5Sum< ::bwi_msgs::GetNextImageResponse>
{
  static const char* value()
  {
    return MD5Sum< ::bwi_msgs::GetNextImage >::value();
  }
  static const char* value(const ::bwi_msgs::GetNextImageResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::bwi_msgs::GetNextImageResponse> should match 
// service_traits::DataType< ::bwi_msgs::GetNextImage > 
template<>
struct DataType< ::bwi_msgs::GetNextImageResponse>
{
  static const char* value()
  {
    return DataType< ::bwi_msgs::GetNextImage >::value();
  }
  static const char* value(const ::bwi_msgs::GetNextImageResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BWI_MSGS_MESSAGE_GETNEXTIMAGE_H
