// Generated by gencpp from file chapter2_tutorials/AddTwoInt.msg
// DO NOT EDIT!


#ifndef CHAPTER2_TUTORIALS_MESSAGE_ADDTWOINT_H
#define CHAPTER2_TUTORIALS_MESSAGE_ADDTWOINT_H

#include <ros/service_traits.h>


#include <chapter2_tutorials/AddTwoIntRequest.h>
#include <chapter2_tutorials/AddTwoIntResponse.h>


namespace chapter2_tutorials
{

struct AddTwoInt
{

typedef AddTwoIntRequest Request;
typedef AddTwoIntResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddTwoInt
} // namespace chapter2_tutorials


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::chapter2_tutorials::AddTwoInt > {
  static const char* value()
  {
    return "6a2e34150c00229791cc89ff309fff21";
  }

  static const char* value(const ::chapter2_tutorials::AddTwoInt&) { return value(); }
};

template<>
struct DataType< ::chapter2_tutorials::AddTwoInt > {
  static const char* value()
  {
    return "chapter2_tutorials/AddTwoInt";
  }

  static const char* value(const ::chapter2_tutorials::AddTwoInt&) { return value(); }
};


// service_traits::MD5Sum< ::chapter2_tutorials::AddTwoIntRequest> should match 
// service_traits::MD5Sum< ::chapter2_tutorials::AddTwoInt > 
template<>
struct MD5Sum< ::chapter2_tutorials::AddTwoIntRequest>
{
  static const char* value()
  {
    return MD5Sum< ::chapter2_tutorials::AddTwoInt >::value();
  }
  static const char* value(const ::chapter2_tutorials::AddTwoIntRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::chapter2_tutorials::AddTwoIntRequest> should match 
// service_traits::DataType< ::chapter2_tutorials::AddTwoInt > 
template<>
struct DataType< ::chapter2_tutorials::AddTwoIntRequest>
{
  static const char* value()
  {
    return DataType< ::chapter2_tutorials::AddTwoInt >::value();
  }
  static const char* value(const ::chapter2_tutorials::AddTwoIntRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::chapter2_tutorials::AddTwoIntResponse> should match 
// service_traits::MD5Sum< ::chapter2_tutorials::AddTwoInt > 
template<>
struct MD5Sum< ::chapter2_tutorials::AddTwoIntResponse>
{
  static const char* value()
  {
    return MD5Sum< ::chapter2_tutorials::AddTwoInt >::value();
  }
  static const char* value(const ::chapter2_tutorials::AddTwoIntResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::chapter2_tutorials::AddTwoIntResponse> should match 
// service_traits::DataType< ::chapter2_tutorials::AddTwoInt > 
template<>
struct DataType< ::chapter2_tutorials::AddTwoIntResponse>
{
  static const char* value()
  {
    return DataType< ::chapter2_tutorials::AddTwoInt >::value();
  }
  static const char* value(const ::chapter2_tutorials::AddTwoIntResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CHAPTER2_TUTORIALS_MESSAGE_ADDTWOINT_H
