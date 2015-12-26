// Generated by gencpp from file chapter2_tutorials/AddTwoIntRequest.msg
// DO NOT EDIT!


#ifndef CHAPTER2_TUTORIALS_MESSAGE_ADDTWOINTREQUEST_H
#define CHAPTER2_TUTORIALS_MESSAGE_ADDTWOINTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace chapter2_tutorials
{
template <class ContainerAllocator>
struct AddTwoIntRequest_
{
  typedef AddTwoIntRequest_<ContainerAllocator> Type;

  AddTwoIntRequest_()
    : a(0)
    , b(0)  {
    }
  AddTwoIntRequest_(const ContainerAllocator& _alloc)
    : a(0)
    , b(0)  {
    }



   typedef int64_t _a_type;
  _a_type a;

   typedef int64_t _b_type;
  _b_type b;




  typedef boost::shared_ptr< ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AddTwoIntRequest_

typedef ::chapter2_tutorials::AddTwoIntRequest_<std::allocator<void> > AddTwoIntRequest;

typedef boost::shared_ptr< ::chapter2_tutorials::AddTwoIntRequest > AddTwoIntRequestPtr;
typedef boost::shared_ptr< ::chapter2_tutorials::AddTwoIntRequest const> AddTwoIntRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace chapter2_tutorials

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'chapter2_tutorials': ['/home/amalia/book_tutorials/src/chapter2_tutorials/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "36d09b846be0b371c5f190354dd3153e";
  }

  static const char* value(const ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x36d09b846be0b371ULL;
  static const uint64_t static_value2 = 0xc5f190354dd3153eULL;
};

template<class ContainerAllocator>
struct DataType< ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "chapter2_tutorials/AddTwoIntRequest";
  }

  static const char* value(const ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 a\n\
int64 b\n\
";
  }

  static const char* value(const ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct AddTwoIntRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::chapter2_tutorials::AddTwoIntRequest_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    Printer<int64_t>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<int64_t>::stream(s, indent + "  ", v.b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CHAPTER2_TUTORIALS_MESSAGE_ADDTWOINTREQUEST_H
