// Generated by gencpp from file puma_motor_msgs/MultiStatus.msg
// DO NOT EDIT!


#ifndef PUMA_MOTOR_MSGS_MESSAGE_MULTISTATUS_H
#define PUMA_MOTOR_MSGS_MESSAGE_MULTISTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <puma_motor_msgs/Status.h>

namespace puma_motor_msgs
{
template <class ContainerAllocator>
struct MultiStatus_
{
  typedef MultiStatus_<ContainerAllocator> Type;

  MultiStatus_()
    : header()
    , drivers()  {
    }
  MultiStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , drivers(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::puma_motor_msgs::Status_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::puma_motor_msgs::Status_<ContainerAllocator> >::other >  _drivers_type;
  _drivers_type drivers;





  typedef boost::shared_ptr< ::puma_motor_msgs::MultiStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::puma_motor_msgs::MultiStatus_<ContainerAllocator> const> ConstPtr;

}; // struct MultiStatus_

typedef ::puma_motor_msgs::MultiStatus_<std::allocator<void> > MultiStatus;

typedef boost::shared_ptr< ::puma_motor_msgs::MultiStatus > MultiStatusPtr;
typedef boost::shared_ptr< ::puma_motor_msgs::MultiStatus const> MultiStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::puma_motor_msgs::MultiStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::puma_motor_msgs::MultiStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace puma_motor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'puma_motor_msgs': ['/home/thib/baxter-ridgeback-kinetic_ws/src/ridgeback/puma_motor_driver/puma_motor_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::puma_motor_msgs::MultiStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::puma_motor_msgs::MultiStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::puma_motor_msgs::MultiStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::puma_motor_msgs::MultiStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::puma_motor_msgs::MultiStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::puma_motor_msgs::MultiStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::puma_motor_msgs::MultiStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b746a938cc46965f9bbf07f2b2ae617a";
  }

  static const char* value(const ::puma_motor_msgs::MultiStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb746a938cc46965fULL;
  static const uint64_t static_value2 = 0x9bbf07f2b2ae617aULL;
};

template<class ContainerAllocator>
struct DataType< ::puma_motor_msgs::MultiStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "puma_motor_msgs/MultiStatus";
  }

  static const char* value(const ::puma_motor_msgs::MultiStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::puma_motor_msgs::MultiStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
puma_motor_msgs/Status[] drivers\n\
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
\n\
================================================================================\n\
MSG: puma_motor_msgs/Status\n\
# Number on the bus (CAN ID).\n\
uint8 device_number\n\
\n\
# Name of joint controlled, or other identifier.\n\
string device_name\n\
\n\
# Input terminal voltage (volts).\n\
float32 bus_voltage\n\
\n\
# Internal driver temperature (degC).\n\
float32 temperature\n\
\n\
# Voltage as output to the motor (volts).\n\
float32 output_voltage\n\
\n\
# Value of the auxiliary ADC (volts).\n\
float32 analog_input\n\
\n\
# Available control modes, not all of which are broken out to\n\
# this ROS driver.\n\
uint8 MODE_VOLTAGE=0\n\
uint8 MODE_CURRENT=1\n\
uint8 MODE_SPEED=2\n\
uint8 MODE_POSITION=3\n\
uint8 MODE_VCOMP=4\n\
uint8 mode\n\
\n\
# Fault states which could cause the driver to be immobilized.\n\
uint8 FAULT_CURRENT=1\n\
uint8 FAULT_TEMPERATURE=2\n\
uint8 FAULT_BUS_VOLTAGE=4\n\
uint8 FAULT_BRIDGE_DRIVER=8\n\
uint8 fault\n\
";
  }

  static const char* value(const ::puma_motor_msgs::MultiStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::puma_motor_msgs::MultiStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.drivers);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MultiStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::puma_motor_msgs::MultiStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::puma_motor_msgs::MultiStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "drivers[]" << std::endl;
    for (size_t i = 0; i < v.drivers.size(); ++i)
    {
      s << indent << "  drivers[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::puma_motor_msgs::Status_<ContainerAllocator> >::stream(s, indent + "    ", v.drivers[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PUMA_MOTOR_MSGS_MESSAGE_MULTISTATUS_H
