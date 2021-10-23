# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from segway_msgs/SuperAux.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class SuperAux(genpy.Message):
  _md5sum = "34aa6b9336bda114f082ad32bd812cf5"
  _type = "segway_msgs/SuperAux"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header
float32 battery_state_of_charge_percent
float32 battery_current_A0pk
float32 battery_voltage_V
float32 max_cell_temp_degc
float32 max_pcba_temp_degc
float32 max_cell_voltage_V
float32 min_cell_voltage_V
uint32  battery_interface_status_bits

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
  __slots__ = ['header','battery_state_of_charge_percent','battery_current_A0pk','battery_voltage_V','max_cell_temp_degc','max_pcba_temp_degc','max_cell_voltage_V','min_cell_voltage_V','battery_interface_status_bits']
  _slot_types = ['std_msgs/Header','float32','float32','float32','float32','float32','float32','float32','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,battery_state_of_charge_percent,battery_current_A0pk,battery_voltage_V,max_cell_temp_degc,max_pcba_temp_degc,max_cell_voltage_V,min_cell_voltage_V,battery_interface_status_bits

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SuperAux, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.battery_state_of_charge_percent is None:
        self.battery_state_of_charge_percent = 0.
      if self.battery_current_A0pk is None:
        self.battery_current_A0pk = 0.
      if self.battery_voltage_V is None:
        self.battery_voltage_V = 0.
      if self.max_cell_temp_degc is None:
        self.max_cell_temp_degc = 0.
      if self.max_pcba_temp_degc is None:
        self.max_pcba_temp_degc = 0.
      if self.max_cell_voltage_V is None:
        self.max_cell_voltage_V = 0.
      if self.min_cell_voltage_V is None:
        self.min_cell_voltage_V = 0.
      if self.battery_interface_status_bits is None:
        self.battery_interface_status_bits = 0
    else:
      self.header = std_msgs.msg.Header()
      self.battery_state_of_charge_percent = 0.
      self.battery_current_A0pk = 0.
      self.battery_voltage_V = 0.
      self.max_cell_temp_degc = 0.
      self.max_pcba_temp_degc = 0.
      self.max_cell_voltage_V = 0.
      self.min_cell_voltage_V = 0.
      self.battery_interface_status_bits = 0

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
      _x = self
      buff.write(_get_struct_7fI().pack(_x.battery_state_of_charge_percent, _x.battery_current_A0pk, _x.battery_voltage_V, _x.max_cell_temp_degc, _x.max_pcba_temp_degc, _x.max_cell_voltage_V, _x.min_cell_voltage_V, _x.battery_interface_status_bits))
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
      _x = self
      start = end
      end += 32
      (_x.battery_state_of_charge_percent, _x.battery_current_A0pk, _x.battery_voltage_V, _x.max_cell_temp_degc, _x.max_pcba_temp_degc, _x.max_cell_voltage_V, _x.min_cell_voltage_V, _x.battery_interface_status_bits,) = _get_struct_7fI().unpack(str[start:end])
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
      _x = self
      buff.write(_get_struct_7fI().pack(_x.battery_state_of_charge_percent, _x.battery_current_A0pk, _x.battery_voltage_V, _x.max_cell_temp_degc, _x.max_pcba_temp_degc, _x.max_cell_voltage_V, _x.min_cell_voltage_V, _x.battery_interface_status_bits))
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
      _x = self
      start = end
      end += 32
      (_x.battery_state_of_charge_percent, _x.battery_current_A0pk, _x.battery_voltage_V, _x.max_cell_temp_degc, _x.max_pcba_temp_degc, _x.max_cell_voltage_V, _x.min_cell_voltage_V, _x.battery_interface_status_bits,) = _get_struct_7fI().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_7fI = None
def _get_struct_7fI():
    global _struct_7fI
    if _struct_7fI is None:
        _struct_7fI = struct.Struct("<7fI")
    return _struct_7fI