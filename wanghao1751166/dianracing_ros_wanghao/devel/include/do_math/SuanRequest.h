// Generated by gencpp from file do_math/SuanRequest.msg
// DO NOT EDIT!


#ifndef DO_MATH_MESSAGE_SUANREQUEST_H
#define DO_MATH_MESSAGE_SUANREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace do_math
{
template <class ContainerAllocator>
struct SuanRequest_
{
  typedef SuanRequest_<ContainerAllocator> Type;

  SuanRequest_()
    : a(0)
    , b(0)
    , c(0)  {
    }
  SuanRequest_(const ContainerAllocator& _alloc)
    : a(0)
    , b(0)
    , c(0)  {
  (void)_alloc;
    }



   typedef int64_t _a_type;
  _a_type a;

   typedef int64_t _b_type;
  _b_type b;

   typedef int64_t _c_type;
  _c_type c;





  typedef boost::shared_ptr< ::do_math::SuanRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::do_math::SuanRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SuanRequest_

typedef ::do_math::SuanRequest_<std::allocator<void> > SuanRequest;

typedef boost::shared_ptr< ::do_math::SuanRequest > SuanRequestPtr;
typedef boost::shared_ptr< ::do_math::SuanRequest const> SuanRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::do_math::SuanRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::do_math::SuanRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace do_math

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::do_math::SuanRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::do_math::SuanRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::do_math::SuanRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::do_math::SuanRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::do_math::SuanRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::do_math::SuanRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::do_math::SuanRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c8559b52d432bccd240703f31aeca517";
  }

  static const char* value(const ::do_math::SuanRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc8559b52d432bccdULL;
  static const uint64_t static_value2 = 0x240703f31aeca517ULL;
};

template<class ContainerAllocator>
struct DataType< ::do_math::SuanRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "do_math/SuanRequest";
  }

  static const char* value(const ::do_math::SuanRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::do_math::SuanRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 a\n\
int64 b\n\
int64 c\n\
";
  }

  static const char* value(const ::do_math::SuanRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::do_math::SuanRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
      stream.next(m.c);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SuanRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::do_math::SuanRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::do_math::SuanRequest_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    Printer<int64_t>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<int64_t>::stream(s, indent + "  ", v.b);
    s << indent << "c: ";
    Printer<int64_t>::stream(s, indent + "  ", v.c);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DO_MATH_MESSAGE_SUANREQUEST_H
