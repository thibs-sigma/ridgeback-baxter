// Generated by gencpp from file puma_motor_msgs/Status.msg
// DO NOT EDIT!


#ifndef PUMA_MOTOR_MSGS_MESSAGE_STATUS_H
#define PUMA_MOTOR_MSGS_MESSAGE_STATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace puma_motor_msgs
{
template <class ContainerAllocator>
struct Status_
{
  typedef Status_<ContainerAllocator> Type;

  Status_()
    : device_number(0)
    , device_name()
    , bus_voltage(0.0)
    , temperature(0.0)
    , output_voltage(0.0)
    , analog_input(0.0)
    , mode(0)
    , fault(0)  {
    }
  Status_(const ContainerAllocator& _alloc)
    : device_number(0)
    , device_name(_alloc)
    , bus_voltage(0.0)
    , temperature(0.0)
    , output_voltage(0.0)
    , analog_input(0.0)
    , mode(0)
    , fault(0)  {
  (void)_alloc;
    }



   typedef uint8_t _device_number_type;
  _device_number_type device_number;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _device_name_type;
  _device_name_type device_name;

   typedef float _bus_voltage_type;
  _bus_voltage_type bus_voltage;

   typedef float _temperature_type;
  _temperature_type temperature;

   typedef float _output_voltage_type;
  _output_voltage_type output_voltage;

   typedef float _analog_input_type;
  _analog_input_type analog_input;

   typedef uint8_t _mode_type;
  _mode_type mode;

   typedef uint8_t _fault_type;
  _fault_type fault;



  enum {
    MODE_VOLTAGE = 0u,
    MODE_CURRENT = 1u,
    MODE_SPEED = 2u,
    MODE_POSITION = 3u,
    MODE_VCOMP = 4u,
    FAULT_CURRENT = 1u,
    FAULT_TEMPERATURE = 2u,
    FAULT_BUS_VOLTAGE = 4u,
    FAULT_BRIDGE_DRIVER = 8u,
  };


  typedef boost::shared_ptr< ::puma_motor_msgs::Status_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::puma_motor_msgs::Status_<ContainerAllocator> const> ConstPtr;

}; // struct Status_

typedef ::puma_motor_msgs::Status_<std::allocator<void> > Status;

typedef boost::shared_ptr< ::puma_motor_msgs::Status > StatusPtr;
typedef boost::shared_ptr< ::puma_motor_msgs::Status const> StatusConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::puma_motor_msgs::Status_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::puma_motor_msgs::Status_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace puma_motor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'puma_motor_msgs': ['/home/thib/baxter-ridgeback-kinetic_ws/src/ridgeback/puma_motor_driver/puma_motor_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::puma_motor_msgs::Status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::puma_motor_msgs::Status_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::puma_motor_msgs::Status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::puma_motor_msgs::Status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::puma_motor_msgs::Status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::puma_motor_msgs::Status_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::puma_motor_msgs::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dfaa28177bcf41afb1fd540570b3e6a4";
  }

  static const char* value(const ::puma_motor_msgs::Status_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdfaa28177bcf41afULL;
  static const uint64_t static_value2 = 0xb1fd540570b3e6a4ULL;
};

template<class ContainerAllocator>
struct DataType< ::puma_motor_msgs::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "puma_motor_msgs/Status";
  }

  static const char* value(const ::puma_motor_msgs::Status_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::puma_motor_msgs::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Number on the bus (CAN ID).\n\
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

  static const char* value(const ::puma_motor_msgs::Status_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::puma_motor_msgs::Status_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.device_number);
      stream.next(m.device_name);
      stream.next(m.bus_voltage);
      stream.next(m.temperature);
      stream.next(m.output_voltage);
      stream.next(m.analog_input);
      stream.next(m.mode);
      stream.next(m.fault);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Status_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::puma_motor_msgs::Status_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::puma_motor_msgs::Status_<ContainerAllocator>& v)
  {
    s << indent << "device_number: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.device_number);
    s << indent << "device_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.device_name);
    s << indent << "bus_voltage: ";
    Printer<float>::stream(s, indent + "  ", v.bus_voltage);
    s << indent << "temperature: ";
    Printer<float>::stream(s, indent + "  ", v.temperature);
    s << indent << "output_voltage: ";
    Printer<float>::stream(s, indent + "  ", v.output_voltage);
    s << indent << "analog_input: ";
    Printer<float>::stream(s, indent + "  ", v.analog_input);
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fault);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PUMA_MOTOR_MSGS_MESSAGE_STATUS_H
