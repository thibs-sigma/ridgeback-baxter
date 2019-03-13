# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from puma_motor_msgs/Status.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Status(genpy.Message):
  _md5sum = "dfaa28177bcf41afb1fd540570b3e6a4"
  _type = "puma_motor_msgs/Status"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Number on the bus (CAN ID).
uint8 device_number

# Name of joint controlled, or other identifier.
string device_name

# Input terminal voltage (volts).
float32 bus_voltage

# Internal driver temperature (degC).
float32 temperature

# Voltage as output to the motor (volts).
float32 output_voltage

# Value of the auxiliary ADC (volts).
float32 analog_input

# Available control modes, not all of which are broken out to
# this ROS driver.
uint8 MODE_VOLTAGE=0
uint8 MODE_CURRENT=1
uint8 MODE_SPEED=2
uint8 MODE_POSITION=3
uint8 MODE_VCOMP=4
uint8 mode

# Fault states which could cause the driver to be immobilized.
uint8 FAULT_CURRENT=1
uint8 FAULT_TEMPERATURE=2
uint8 FAULT_BUS_VOLTAGE=4
uint8 FAULT_BRIDGE_DRIVER=8
uint8 fault
"""
  # Pseudo-constants
  MODE_VOLTAGE = 0
  MODE_CURRENT = 1
  MODE_SPEED = 2
  MODE_POSITION = 3
  MODE_VCOMP = 4
  FAULT_CURRENT = 1
  FAULT_TEMPERATURE = 2
  FAULT_BUS_VOLTAGE = 4
  FAULT_BRIDGE_DRIVER = 8

  __slots__ = ['device_number','device_name','bus_voltage','temperature','output_voltage','analog_input','mode','fault']
  _slot_types = ['uint8','string','float32','float32','float32','float32','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       device_number,device_name,bus_voltage,temperature,output_voltage,analog_input,mode,fault

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Status, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.device_number is None:
        self.device_number = 0
      if self.device_name is None:
        self.device_name = ''
      if self.bus_voltage is None:
        self.bus_voltage = 0.
      if self.temperature is None:
        self.temperature = 0.
      if self.output_voltage is None:
        self.output_voltage = 0.
      if self.analog_input is None:
        self.analog_input = 0.
      if self.mode is None:
        self.mode = 0
      if self.fault is None:
        self.fault = 0
    else:
      self.device_number = 0
      self.device_name = ''
      self.bus_voltage = 0.
      self.temperature = 0.
      self.output_voltage = 0.
      self.analog_input = 0.
      self.mode = 0
      self.fault = 0

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
      buff.write(_get_struct_B().pack(self.device_number))
      _x = self.device_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_4f2B().pack(_x.bus_voltage, _x.temperature, _x.output_voltage, _x.analog_input, _x.mode, _x.fault))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 1
      (self.device_number,) = _get_struct_B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.device_name = str[start:end].decode('utf-8')
      else:
        self.device_name = str[start:end]
      _x = self
      start = end
      end += 18
      (_x.bus_voltage, _x.temperature, _x.output_voltage, _x.analog_input, _x.mode, _x.fault,) = _get_struct_4f2B().unpack(str[start:end])
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
      buff.write(_get_struct_B().pack(self.device_number))
      _x = self.device_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_4f2B().pack(_x.bus_voltage, _x.temperature, _x.output_voltage, _x.analog_input, _x.mode, _x.fault))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 1
      (self.device_number,) = _get_struct_B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.device_name = str[start:end].decode('utf-8')
      else:
        self.device_name = str[start:end]
      _x = self
      start = end
      end += 18
      (_x.bus_voltage, _x.temperature, _x.output_voltage, _x.analog_input, _x.mode, _x.fault,) = _get_struct_4f2B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4f2B = None
def _get_struct_4f2B():
    global _struct_4f2B
    if _struct_4f2B is None:
        _struct_4f2B = struct.Struct("<4f2B")
    return _struct_4f2B
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
