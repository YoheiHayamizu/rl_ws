// Generated by gencpp from file bwi_moveit_utils/MoveitCartesianPose.msg
// DO NOT EDIT!


#ifndef BWI_MOVEIT_UTILS_MESSAGE_MOVEITCARTESIANPOSE_H
#define BWI_MOVEIT_UTILS_MESSAGE_MOVEITCARTESIANPOSE_H

#include <ros/service_traits.h>


#include <bwi_moveit_utils/MoveitCartesianPoseRequest.h>
#include <bwi_moveit_utils/MoveitCartesianPoseResponse.h>


namespace bwi_moveit_utils
{

struct MoveitCartesianPose
{

typedef MoveitCartesianPoseRequest Request;
typedef MoveitCartesianPoseResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MoveitCartesianPose
} // namespace bwi_moveit_utils


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::bwi_moveit_utils::MoveitCartesianPose > {
  static const char* value()
  {
    return "48463013f77cb96c218a8c43048e406b";
  }

  static const char* value(const ::bwi_moveit_utils::MoveitCartesianPose&) { return value(); }
};

template<>
struct DataType< ::bwi_moveit_utils::MoveitCartesianPose > {
  static const char* value()
  {
    return "bwi_moveit_utils/MoveitCartesianPose";
  }

  static const char* value(const ::bwi_moveit_utils::MoveitCartesianPose&) { return value(); }
};


// service_traits::MD5Sum< ::bwi_moveit_utils::MoveitCartesianPoseRequest> should match 
// service_traits::MD5Sum< ::bwi_moveit_utils::MoveitCartesianPose > 
template<>
struct MD5Sum< ::bwi_moveit_utils::MoveitCartesianPoseRequest>
{
  static const char* value()
  {
    return MD5Sum< ::bwi_moveit_utils::MoveitCartesianPose >::value();
  }
  static const char* value(const ::bwi_moveit_utils::MoveitCartesianPoseRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::bwi_moveit_utils::MoveitCartesianPoseRequest> should match 
// service_traits::DataType< ::bwi_moveit_utils::MoveitCartesianPose > 
template<>
struct DataType< ::bwi_moveit_utils::MoveitCartesianPoseRequest>
{
  static const char* value()
  {
    return DataType< ::bwi_moveit_utils::MoveitCartesianPose >::value();
  }
  static const char* value(const ::bwi_moveit_utils::MoveitCartesianPoseRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::bwi_moveit_utils::MoveitCartesianPoseResponse> should match 
// service_traits::MD5Sum< ::bwi_moveit_utils::MoveitCartesianPose > 
template<>
struct MD5Sum< ::bwi_moveit_utils::MoveitCartesianPoseResponse>
{
  static const char* value()
  {
    return MD5Sum< ::bwi_moveit_utils::MoveitCartesianPose >::value();
  }
  static const char* value(const ::bwi_moveit_utils::MoveitCartesianPoseResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::bwi_moveit_utils::MoveitCartesianPoseResponse> should match 
// service_traits::DataType< ::bwi_moveit_utils::MoveitCartesianPose > 
template<>
struct DataType< ::bwi_moveit_utils::MoveitCartesianPoseResponse>
{
  static const char* value()
  {
    return DataType< ::bwi_moveit_utils::MoveitCartesianPose >::value();
  }
  static const char* value(const ::bwi_moveit_utils::MoveitCartesianPoseResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BWI_MOVEIT_UTILS_MESSAGE_MOVEITCARTESIANPOSE_H
