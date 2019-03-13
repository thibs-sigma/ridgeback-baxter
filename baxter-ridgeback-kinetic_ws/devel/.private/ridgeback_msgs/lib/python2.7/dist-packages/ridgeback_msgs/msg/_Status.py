# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ridgeback_msgs/Status.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy
import std_msgs.msg

class Status(genpy.Message):
  _md5sum = "5b3d8e0f8c2c371cf7df823649f67044"
  _type = "ridgeback_msgs/Status"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# This message represents Ridgeback's lower-frequency status updates from the MCU
# Default publish frequency is 1Hz.

Header header

# Commit of firmware source.
string hardware_id

# Times since MCU power-on and MCU rosserial connection, respectively.
duration mcu_uptime
duration connection_uptime

# Temperature of MCU's PCB in Celsius.
float32 pcb_temperature
float32 mcu_temperature

# Monitoring the run/stop loop. Changes in these values trigger an immediate
# publish, outside the ordinarily-scheduled 1Hz updates.
bool stop_power_status  # True indicates the stop loop is operational (ie. it is powered).
bool stop_engaged  # True when a stop has been pressed on the robot.
bool drivers_active  # False when a stop is asserted to the motor drivers.
bool external_stop_present  # True indicates a external stop has been plugged in.

# Indicates if AC power is connected.
bool charger_connected
bool charging_complete

# Voltage rails, in volts
# Averaged over the message period
float32 measured_battery
float32 measured_12v
float32 measured_5v
float32 measured_inverter
float32 measured_front_axle
float32 measured_rear_axle
float32 measured_light

# Current senses available on platform, in amps.
# Averaged over the message period
float32 total_current

# Highest total system current peak as measured in a 1ms window.
float32 total_current_peak

# Integration of all power consumption since MCU power-on, in watt-hours.
float64 total_power_consumed

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id
"""
  __slots__ = ['header','hardware_id','mcu_uptime','connection_uptime','pcb_temperature','mcu_temperature','stop_power_status','stop_engaged','drivers_active','external_stop_present','charger_connected','charging_complete','measured_battery','measured_12v','measured_5v','measured_inverter','measured_front_axle','measured_rear_axle','measured_light','total_current','total_current_peak','total_power_consumed']
  _slot_types = ['std_msgs/Header','string','duration','duration','float32','float32','bool','bool','bool','bool','bool','bool','float32','float32','float32','float32','float32','float32','float32','float32','float32','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,hardware_id,mcu_uptime,connection_uptime,pcb_temperature,mcu_temperature,stop_power_status,stop_engaged,drivers_active,external_stop_present,charger_connected,charging_complete,measured_battery,measured_12v,measured_5v,measured_inverter,measured_front_axle,measured_rear_axle,measured_light,total_current,total_current_peak,total_power_consumed

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Status, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.hardware_id is None:
        self.hardware_id = ''
      if self.mcu_uptime is None:
        self.mcu_uptime = genpy.Duration()
      if self.connection_uptime is None:
        self.connection_uptime = genpy.Duration()
      if self.pcb_temperature is None:
        self.pcb_temperature = 0.
      if self.mcu_temperature is None:
        self.mcu_temperature = 0.
      if self.stop_power_status is None:
        self.stop_power_status = False
      if self.stop_engaged is None:
        self.stop_engaged = False
      if self.drivers_active is None:
        self.drivers_active = False
      if self.external_stop_present is None:
        self.external_stop_present = False
      if self.charger_connected is None:
        self.charger_connected = False
      if self.charging_complete is None:
        self.charging_complete = False
      if self.measured_battery is None:
        self.measured_battery = 0.
      if self.measured_12v is None:
        self.measured_12v = 0.
      if self.measured_5v is None:
        self.measured_5v = 0.
      if self.measured_inverter is None:
        self.measured_inverter = 0.
      if self.measured_front_axle is None:
        self.measured_front_axle = 0.
      if self.measured_rear_axle is None:
        self.measured_rear_axle = 0.
      if self.measured_light is None:
        self.measured_light = 0.
      if self.total_current is None:
        self.total_current = 0.
      if self.total_current_peak is None:
        self.total_current_peak = 0.
      if self.total_power_consumed is None:
        self.total_power_consumed = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.hardware_id = ''
      self.mcu_uptime = genpy.Duration()
      self.connection_uptime = genpy.Duration()
      self.pcb_temperature = 0.
      self.mcu_temperature = 0.
      self.stop_power_status = False
      self.stop_engaged = False
      self.drivers_active = False
      self.external_stop_present = False
      self.charger_connected = False
      self.charging_complete = False
      self.measured_battery = 0.
      self.measured_12v = 0.
      self.measured_5v = 0.
      self.measured_inverter = 0.
      self.measured_front_axle = 0.
      self.measured_rear_axle = 0.
      self.measured_light = 0.
      self.total_current = 0.
      self.total_current_peak = 0.
      self.total_power_consumed = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.hardware_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_4i2f6B9fd().pack(_x.mcu_uptime.secs, _x.mcu_uptime.nsecs, _x.connection_uptime.secs, _x.connection_uptime.nsecs, _x.pcb_temperature, _x.mcu_temperature, _x.stop_power_status, _x.stop_engaged, _x.drivers_active, _x.external_stop_present, _x.charger_connected, _x.charging_complete, _x.measured_battery, _x.measured_12v, _x.measured_5v, _x.measured_inverter, _x.measured_front_axle, _x.measured_rear_axle, _x.measured_light, _x.total_current, _x.total_current_peak, _x.total_power_consumed))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.mcu_uptime is None:
        self.mcu_uptime = genpy.Duration()
      if self.connection_uptime is None:
        self.connection_uptime = genpy.Duration()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.hardware_id = str[start:end].decode('utf-8')
      else:
        self.hardware_id = str[start:end]
      _x = self
      start = end
      end += 74
      (_x.mcu_uptime.secs, _x.mcu_uptime.nsecs, _x.connection_uptime.secs, _x.connection_uptime.nsecs, _x.pcb_temperature, _x.mcu_temperature, _x.stop_power_status, _x.stop_engaged, _x.drivers_active, _x.external_stop_present, _x.charger_connected, _x.charging_complete, _x.measured_battery, _x.measured_12v, _x.measured_5v, _x.measured_inverter, _x.measured_front_axle, _x.measured_rear_axle, _x.measured_light, _x.total_current, _x.total_current_peak, _x.total_power_consumed,) = _get_struct_4i2f6B9fd().unpack(str[start:end])
      self.stop_power_status = bool(self.stop_power_status)
      self.stop_engaged = bool(self.stop_engaged)
      self.drivers_active = bool(self.drivers_active)
      self.external_stop_present = bool(self.external_stop_present)
      self.charger_connected = bool(self.charger_connected)
      self.charging_complete = bool(self.charging_complete)
      self.mcu_uptime.canon()
      self.connection_uptime.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.hardware_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_4i2f6B9fd().pack(_x.mcu_uptime.secs, _x.mcu_uptime.nsecs, _x.connection_uptime.secs, _x.connection_uptime.nsecs, _x.pcb_temperature, _x.mcu_temperature, _x.stop_power_status, _x.stop_engaged, _x.drivers_active, _x.external_stop_present, _x.charger_connected, _x.charging_complete, _x.measured_battery, _x.measured_12v, _x.measured_5v, _x.measured_inverter, _x.measured_front_axle, _x.measured_rear_axle, _x.measured_light, _x.total_current, _x.total_current_peak, _x.total_power_consumed))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.mcu_uptime is None:
        self.mcu_uptime = genpy.Duration()
      if self.connection_uptime is None:
        self.connection_uptime = genpy.Duration()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.hardware_id = str[start:end].decode('utf-8')
      else:
        self.hardware_id = str[start:end]
      _x = self
      start = end
      end += 74
      (_x.mcu_uptime.secs, _x.mcu_uptime.nsecs, _x.connection_uptime.secs, _x.connection_uptime.nsecs, _x.pcb_temperature, _x.mcu_temperature, _x.stop_power_status, _x.stop_engaged, _x.drivers_active, _x.external_stop_present, _x.charger_connected, _x.charging_complete, _x.measured_battery, _x.measured_12v, _x.measured_5v, _x.measured_inverter, _x.measured_front_axle, _x.measured_rear_axle, _x.measured_light, _x.total_current, _x.total_current_peak, _x.total_power_consumed,) = _get_struct_4i2f6B9fd().unpack(str[start:end])
      self.stop_power_status = bool(self.stop_power_status)
      self.stop_engaged = bool(self.stop_engaged)
      self.drivers_active = bool(self.drivers_active)
      self.external_stop_present = bool(self.external_stop_present)
      self.charger_connected = bool(self.charger_connected)
      self.charging_complete = bool(self.charging_complete)
      self.mcu_uptime.canon()
      self.connection_uptime.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4i2f6B9fd = None
def _get_struct_4i2f6B9fd():
    global _struct_4i2f6B9fd
    if _struct_4i2f6B9fd is None:
        _struct_4i2f6B9fd = struct.Struct("<4i2f6B9fd")
    return _struct_4i2f6B9fd
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
