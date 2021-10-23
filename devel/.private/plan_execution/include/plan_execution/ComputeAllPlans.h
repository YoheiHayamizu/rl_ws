// Generated by gencpp from file plan_execution/ComputeAllPlans.msg
// DO NOT EDIT!


#ifndef PLAN_EXECUTION_MESSAGE_COMPUTEALLPLANS_H
#define PLAN_EXECUTION_MESSAGE_COMPUTEALLPLANS_H

#include <ros/service_traits.h>


#include <plan_execution/ComputeAllPlansRequest.h>
#include <plan_execution/ComputeAllPlansResponse.h>


namespace plan_execution
{

struct ComputeAllPlans
{

typedef ComputeAllPlansRequest Request;
typedef ComputeAllPlansResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ComputeAllPlans
} // namespace plan_execution


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::plan_execution::ComputeAllPlans > {
  static const char* value()
  {
    return "5055d2fd937455d30a412653ffa463c6";
  }

  static const char* value(const ::plan_execution::ComputeAllPlans&) { return value(); }
};

template<>
struct DataType< ::plan_execution::ComputeAllPlans > {
  static const char* value()
  {
    return "plan_execution/ComputeAllPlans";
  }

  static const char* value(const ::plan_execution::ComputeAllPlans&) { return value(); }
};


// service_traits::MD5Sum< ::plan_execution::ComputeAllPlansRequest> should match 
// service_traits::MD5Sum< ::plan_execution::ComputeAllPlans > 
template<>
struct MD5Sum< ::plan_execution::ComputeAllPlansRequest>
{
  static const char* value()
  {
    return MD5Sum< ::plan_execution::ComputeAllPlans >::value();
  }
  static const char* value(const ::plan_execution::ComputeAllPlansRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::plan_execution::ComputeAllPlansRequest> should match 
// service_traits::DataType< ::plan_execution::ComputeAllPlans > 
template<>
struct DataType< ::plan_execution::ComputeAllPlansRequest>
{
  static const char* value()
  {
    return DataType< ::plan_execution::ComputeAllPlans >::value();
  }
  static const char* value(const ::plan_execution::ComputeAllPlansRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::plan_execution::ComputeAllPlansResponse> should match 
// service_traits::MD5Sum< ::plan_execution::ComputeAllPlans > 
template<>
struct MD5Sum< ::plan_execution::ComputeAllPlansResponse>
{
  static const char* value()
  {
    return MD5Sum< ::plan_execution::ComputeAllPlans >::value();
  }
  static const char* value(const ::plan_execution::ComputeAllPlansResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::plan_execution::ComputeAllPlansResponse> should match 
// service_traits::DataType< ::plan_execution::ComputeAllPlans > 
template<>
struct DataType< ::plan_execution::ComputeAllPlansResponse>
{
  static const char* value()
  {
    return DataType< ::plan_execution::ComputeAllPlans >::value();
  }
  static const char* value(const ::plan_execution::ComputeAllPlansResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PLAN_EXECUTION_MESSAGE_COMPUTEALLPLANS_H