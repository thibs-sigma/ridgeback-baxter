// Generated by gencpp from file ridgeback_msgs/Fans.msg
// DO NOT EDIT!


#ifndef RIDGEBACK_MSGS_MESSAGE_FANS_H
#define RIDGEBACK_MSGS_MESSAGE_FANS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ridgeback_msgs
{
template <class ContainerAllocator>
struct Fans_
{
  typedef Fans_<ContainerAllocator> Type;

  Fans_()
    : fans()  {
      fans.assign(0);
  }
  Fans_(const ContainerAllocator& _alloc)
    : fans()  {
  (void)_alloc;
      fans.assign(0);
  }



   typedef boost::array<uint8_t, 6>  _fans_type;
  _fans_type fans;



  enum {
    EQUIPMENT_BAY_INTAKE = 0u,
    EQUIPMENT_BAY_EXHAUST = 1u,
    CHARGER_BAY_INTAKE = 2u,
    CHARGER_BAY_EXHAUST = 3u,
    USER_BAY_INTAKE = 4u,
    USER_BAY_EXHAUST = 5u,
    FAN_OFF = 0u,
    FAN_ON_HIGH = 1u,
    FAN_ON_LOW = 2u,
  };


  typedef boost::shared_ptr< ::ridgeback_msgs::Fans_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ridgeback_msgs::Fans_<ContainerAllocator> const> ConstPtr;

}; // struct Fans_

typedef ::ridgeback_msgs::Fans_<std::allocator<void> > Fans;

typedef boost::shared_ptr< ::ridgeback_msgs::Fans > FansPtr;
typedef boost::shared_ptr< ::ridgeback_msgs::Fans const> FansConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ridgeback_msgs::Fans_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ridgeback_msgs::Fans_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ridgeback_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'ridgeback_msgs': ['/home/thib/baxter-ridgeback-kinetic_ws/src/ridgeback/ridgeback_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ridgeback_msgs::Fans_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ridgeback_msgs::Fans_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ridgeback_msgs::Fans_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ridgeback_msgs::Fans_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ridgeback_msgs::Fans_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ridgeback_msgs::Fans_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ridgeback_msgs::Fans_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d529aec610975f8df12d912730064bbf";
  }

  static const char* value(const ::ridgeback_msgs::Fans_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd529aec610975f8dULL;
  static const uint64_t static_value2 = 0xf12d912730064bbfULL;
};

template<class ContainerAllocator>
struct DataType< ::ridgeback_msgs::Fans_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ridgeback_msgs/Fans";
  }

  static const char* value(const ::ridgeback_msgs::Fans_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ridgeback_msgs::Fans_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Location of fans.\n\
uint8 EQUIPMENT_BAY_INTAKE=0\n\
uint8 EQUIPMENT_BAY_EXHAUST=1\n\
uint8 CHARGER_BAY_INTAKE=2\n\
uint8 CHARGER_BAY_EXHAUST=3\n\
uint8 USER_BAY_INTAKE=4\n\
uint8 USER_BAY_EXHAUST=5\n\
\n\
uint8 FAN_OFF=0\n\
uint8 FAN_ON_HIGH=1\n\
uint8 FAN_ON_LOW=2\n\
uint8[6] fans\n\
";
  }

  static const char* value(const ::ridgeback_msgs::Fans_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ridgeback_msgs::Fans_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.fans);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Fans_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ridgeback_msgs::Fans_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ridgeback_msgs::Fans_<ContainerAllocator>& v)
  {
    s << indent << "fans[]" << std::endl;
    for (size_t i = 0; i < v.fans.size(); ++i)
    {
      s << indent << "  fans[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.fans[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // RIDGEBACK_MSGS_MESSAGE_FANS_H
