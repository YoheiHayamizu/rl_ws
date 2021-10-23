# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from plan_execution/ComputeAllPlansRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import plan_execution.msg

class ComputeAllPlansRequest(genpy.Message):
  _md5sum = "68cf49ab7d4a0a20132dbf7035621ed6"
  _type = "plan_execution/ComputeAllPlansRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """AspRule[] goal
float64 suboptimality

================================================================================
MSG: plan_execution/AspRule
AspFluent[] head
AspFluent[] body

================================================================================
MSG: plan_execution/AspFluent
string name
string[] variables
uint32 timeStep
"""
  __slots__ = ['goal','suboptimality']
  _slot_types = ['plan_execution/AspRule[]','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       goal,suboptimality

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ComputeAllPlansRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.goal is None:
        self.goal = []
      if self.suboptimality is None:
        self.suboptimality = 0.
    else:
      self.goal = []
      self.suboptimality = 0.

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
      length = len(self.goal)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal:
        length = len(val1.head)
        buff.write(_struct_I.pack(length))
        for val2 in val1.head:
          _x = val2.name
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          length = len(val2.variables)
          buff.write(_struct_I.pack(length))
          for val3 in val2.variables:
            length = len(val3)
            if python3 or type(val3) == unicode:
              val3 = val3.encode('utf-8')
              length = len(val3)
            buff.write(struct.pack('<I%ss'%length, length, val3))
          buff.write(_get_struct_I().pack(val2.timeStep))
        length = len(val1.body)
        buff.write(_struct_I.pack(length))
        for val2 in val1.body:
          _x = val2.name
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          length = len(val2.variables)
          buff.write(_struct_I.pack(length))
          for val3 in val2.variables:
            length = len(val3)
            if python3 or type(val3) == unicode:
              val3 = val3.encode('utf-8')
              length = len(val3)
            buff.write(struct.pack('<I%ss'%length, length, val3))
          buff.write(_get_struct_I().pack(val2.timeStep))
      buff.write(_get_struct_d().pack(self.suboptimality))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.goal is None:
        self.goal = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal = []
      for i in range(0, length):
        val1 = plan_execution.msg.AspRule()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.head = []
        for i in range(0, length):
          val2 = plan_execution.msg.AspFluent()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.name = str[start:end].decode('utf-8')
          else:
            val2.name = str[start:end]
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          val2.variables = []
          for i in range(0, length):
            start = end
            end += 4
            (length,) = _struct_I.unpack(str[start:end])
            start = end
            end += length
            if python3:
              val3 = str[start:end].decode('utf-8')
            else:
              val3 = str[start:end]
            val2.variables.append(val3)
          start = end
          end += 4
          (val2.timeStep,) = _get_struct_I().unpack(str[start:end])
          val1.head.append(val2)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.body = []
        for i in range(0, length):
          val2 = plan_execution.msg.AspFluent()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.name = str[start:end].decode('utf-8')
          else:
            val2.name = str[start:end]
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          val2.variables = []
          for i in range(0, length):
            start = end
            end += 4
            (length,) = _struct_I.unpack(str[start:end])
            start = end
            end += length
            if python3:
              val3 = str[start:end].decode('utf-8')
            else:
              val3 = str[start:end]
            val2.variables.append(val3)
          start = end
          end += 4
          (val2.timeStep,) = _get_struct_I().unpack(str[start:end])
          val1.body.append(val2)
        self.goal.append(val1)
      start = end
      end += 8
      (self.suboptimality,) = _get_struct_d().unpack(str[start:end])
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
      length = len(self.goal)
      buff.write(_struct_I.pack(length))
      for val1 in self.goal:
        length = len(val1.head)
        buff.write(_struct_I.pack(length))
        for val2 in val1.head:
          _x = val2.name
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          length = len(val2.variables)
          buff.write(_struct_I.pack(length))
          for val3 in val2.variables:
            length = len(val3)
            if python3 or type(val3) == unicode:
              val3 = val3.encode('utf-8')
              length = len(val3)
            buff.write(struct.pack('<I%ss'%length, length, val3))
          buff.write(_get_struct_I().pack(val2.timeStep))
        length = len(val1.body)
        buff.write(_struct_I.pack(length))
        for val2 in val1.body:
          _x = val2.name
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          length = len(val2.variables)
          buff.write(_struct_I.pack(length))
          for val3 in val2.variables:
            length = len(val3)
            if python3 or type(val3) == unicode:
              val3 = val3.encode('utf-8')
              length = len(val3)
            buff.write(struct.pack('<I%ss'%length, length, val3))
          buff.write(_get_struct_I().pack(val2.timeStep))
      buff.write(_get_struct_d().pack(self.suboptimality))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.goal is None:
        self.goal = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.goal = []
      for i in range(0, length):
        val1 = plan_execution.msg.AspRule()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.head = []
        for i in range(0, length):
          val2 = plan_execution.msg.AspFluent()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.name = str[start:end].decode('utf-8')
          else:
            val2.name = str[start:end]
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          val2.variables = []
          for i in range(0, length):
            start = end
            end += 4
            (length,) = _struct_I.unpack(str[start:end])
            start = end
            end += length
            if python3:
              val3 = str[start:end].decode('utf-8')
            else:
              val3 = str[start:end]
            val2.variables.append(val3)
          start = end
          end += 4
          (val2.timeStep,) = _get_struct_I().unpack(str[start:end])
          val1.head.append(val2)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.body = []
        for i in range(0, length):
          val2 = plan_execution.msg.AspFluent()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.name = str[start:end].decode('utf-8')
          else:
            val2.name = str[start:end]
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          val2.variables = []
          for i in range(0, length):
            start = end
            end += 4
            (length,) = _struct_I.unpack(str[start:end])
            start = end
            end += length
            if python3:
              val3 = str[start:end].decode('utf-8')
            else:
              val3 = str[start:end]
            val2.variables.append(val3)
          start = end
          end += 4
          (val2.timeStep,) = _get_struct_I().unpack(str[start:end])
          val1.body.append(val2)
        self.goal.append(val1)
      start = end
      end += 8
      (self.suboptimality,) = _get_struct_d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_d = None
def _get_struct_d():
    global _struct_d
    if _struct_d is None:
        _struct_d = struct.Struct("<d")
    return _struct_d
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from plan_execution/ComputeAllPlansResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import plan_execution.msg

class ComputeAllPlansResponse(genpy.Message):
  _md5sum = "e78a17dc1189d057625c2e5b0d31d49d"
  _type = "plan_execution/ComputeAllPlansResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """AnswerSet[] plans

================================================================================
MSG: plan_execution/AnswerSet
AspFluent[] fluents
bool satisfied

================================================================================
MSG: plan_execution/AspFluent
string name
string[] variables
uint32 timeStep
"""
  __slots__ = ['plans']
  _slot_types = ['plan_execution/AnswerSet[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       plans

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ComputeAllPlansResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.plans is None:
        self.plans = []
    else:
      self.plans = []

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
      length = len(self.plans)
      buff.write(_struct_I.pack(length))
      for val1 in self.plans:
        length = len(val1.fluents)
        buff.write(_struct_I.pack(length))
        for val2 in val1.fluents:
          _x = val2.name
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          length = len(val2.variables)
          buff.write(_struct_I.pack(length))
          for val3 in val2.variables:
            length = len(val3)
            if python3 or type(val3) == unicode:
              val3 = val3.encode('utf-8')
              length = len(val3)
            buff.write(struct.pack('<I%ss'%length, length, val3))
          buff.write(_get_struct_I().pack(val2.timeStep))
        buff.write(_get_struct_B().pack(val1.satisfied))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.plans is None:
        self.plans = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.plans = []
      for i in range(0, length):
        val1 = plan_execution.msg.AnswerSet()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.fluents = []
        for i in range(0, length):
          val2 = plan_execution.msg.AspFluent()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.name = str[start:end].decode('utf-8')
          else:
            val2.name = str[start:end]
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          val2.variables = []
          for i in range(0, length):
            start = end
            end += 4
            (length,) = _struct_I.unpack(str[start:end])
            start = end
            end += length
            if python3:
              val3 = str[start:end].decode('utf-8')
            else:
              val3 = str[start:end]
            val2.variables.append(val3)
          start = end
          end += 4
          (val2.timeStep,) = _get_struct_I().unpack(str[start:end])
          val1.fluents.append(val2)
        start = end
        end += 1
        (val1.satisfied,) = _get_struct_B().unpack(str[start:end])
        val1.satisfied = bool(val1.satisfied)
        self.plans.append(val1)
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
      length = len(self.plans)
      buff.write(_struct_I.pack(length))
      for val1 in self.plans:
        length = len(val1.fluents)
        buff.write(_struct_I.pack(length))
        for val2 in val1.fluents:
          _x = val2.name
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          length = len(val2.variables)
          buff.write(_struct_I.pack(length))
          for val3 in val2.variables:
            length = len(val3)
            if python3 or type(val3) == unicode:
              val3 = val3.encode('utf-8')
              length = len(val3)
            buff.write(struct.pack('<I%ss'%length, length, val3))
          buff.write(_get_struct_I().pack(val2.timeStep))
        buff.write(_get_struct_B().pack(val1.satisfied))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.plans is None:
        self.plans = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.plans = []
      for i in range(0, length):
        val1 = plan_execution.msg.AnswerSet()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.fluents = []
        for i in range(0, length):
          val2 = plan_execution.msg.AspFluent()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.name = str[start:end].decode('utf-8')
          else:
            val2.name = str[start:end]
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          val2.variables = []
          for i in range(0, length):
            start = end
            end += 4
            (length,) = _struct_I.unpack(str[start:end])
            start = end
            end += length
            if python3:
              val3 = str[start:end].decode('utf-8')
            else:
              val3 = str[start:end]
            val2.variables.append(val3)
          start = end
          end += 4
          (val2.timeStep,) = _get_struct_I().unpack(str[start:end])
          val1.fluents.append(val2)
        start = end
        end += 1
        (val1.satisfied,) = _get_struct_B().unpack(str[start:end])
        val1.satisfied = bool(val1.satisfied)
        self.plans.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
class ComputeAllPlans(object):
  _type          = 'plan_execution/ComputeAllPlans'
  _md5sum = '5055d2fd937455d30a412653ffa463c6'
  _request_class  = ComputeAllPlansRequest
  _response_class = ComputeAllPlansResponse
