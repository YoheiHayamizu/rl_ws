# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from multi_level_map_msgs/MultiLevelMapLink.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import multi_level_map_msgs.msg

class MultiLevelMapLink(genpy.Message):
  _md5sum = "b3b52a350b899d69322587cf7b3a1268"
  _type = "multi_level_map_msgs/MultiLevelMapLink"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """MultiLevelMapPoint from_point
MultiLevelMapPoint to_point
float64 traversal_cost
string forward_message
string reverse_message

================================================================================
MSG: multi_level_map_msgs/MultiLevelMapPoint
string level_id
geometry_msgs/Point point

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z
"""
  __slots__ = ['from_point','to_point','traversal_cost','forward_message','reverse_message']
  _slot_types = ['multi_level_map_msgs/MultiLevelMapPoint','multi_level_map_msgs/MultiLevelMapPoint','float64','string','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       from_point,to_point,traversal_cost,forward_message,reverse_message

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MultiLevelMapLink, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.from_point is None:
        self.from_point = multi_level_map_msgs.msg.MultiLevelMapPoint()
      if self.to_point is None:
        self.to_point = multi_level_map_msgs.msg.MultiLevelMapPoint()
      if self.traversal_cost is None:
        self.traversal_cost = 0.
      if self.forward_message is None:
        self.forward_message = ''
      if self.reverse_message is None:
        self.reverse_message = ''
    else:
      self.from_point = multi_level_map_msgs.msg.MultiLevelMapPoint()
      self.to_point = multi_level_map_msgs.msg.MultiLevelMapPoint()
      self.traversal_cost = 0.
      self.forward_message = ''
      self.reverse_message = ''

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
      _x = self.from_point.level_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_3d().pack(_x.from_point.point.x, _x.from_point.point.y, _x.from_point.point.z))
      _x = self.to_point.level_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_4d().pack(_x.to_point.point.x, _x.to_point.point.y, _x.to_point.point.z, _x.traversal_cost))
      _x = self.forward_message
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.reverse_message
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.from_point is None:
        self.from_point = multi_level_map_msgs.msg.MultiLevelMapPoint()
      if self.to_point is None:
        self.to_point = multi_level_map_msgs.msg.MultiLevelMapPoint()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.from_point.level_id = str[start:end].decode('utf-8')
      else:
        self.from_point.level_id = str[start:end]
      _x = self
      start = end
      end += 24
      (_x.from_point.point.x, _x.from_point.point.y, _x.from_point.point.z,) = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.to_point.level_id = str[start:end].decode('utf-8')
      else:
        self.to_point.level_id = str[start:end]
      _x = self
      start = end
      end += 32
      (_x.to_point.point.x, _x.to_point.point.y, _x.to_point.point.z, _x.traversal_cost,) = _get_struct_4d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.forward_message = str[start:end].decode('utf-8')
      else:
        self.forward_message = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.reverse_message = str[start:end].decode('utf-8')
      else:
        self.reverse_message = str[start:end]
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
      _x = self.from_point.level_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_3d().pack(_x.from_point.point.x, _x.from_point.point.y, _x.from_point.point.z))
      _x = self.to_point.level_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_4d().pack(_x.to_point.point.x, _x.to_point.point.y, _x.to_point.point.z, _x.traversal_cost))
      _x = self.forward_message
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.reverse_message
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.from_point is None:
        self.from_point = multi_level_map_msgs.msg.MultiLevelMapPoint()
      if self.to_point is None:
        self.to_point = multi_level_map_msgs.msg.MultiLevelMapPoint()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.from_point.level_id = str[start:end].decode('utf-8')
      else:
        self.from_point.level_id = str[start:end]
      _x = self
      start = end
      end += 24
      (_x.from_point.point.x, _x.from_point.point.y, _x.from_point.point.z,) = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.to_point.level_id = str[start:end].decode('utf-8')
      else:
        self.to_point.level_id = str[start:end]
      _x = self
      start = end
      end += 32
      (_x.to_point.point.x, _x.to_point.point.y, _x.to_point.point.z, _x.traversal_cost,) = _get_struct_4d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.forward_message = str[start:end].decode('utf-8')
      else:
        self.forward_message = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.reverse_message = str[start:end].decode('utf-8')
      else:
        self.reverse_message = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d