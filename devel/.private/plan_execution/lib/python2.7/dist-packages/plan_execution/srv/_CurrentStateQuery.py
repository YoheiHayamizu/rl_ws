# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from plan_execution/CurrentStateQueryRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import plan_execution.msg

class CurrentStateQueryRequest(genpy.Message):
  _md5sum = "a20201e158d8a211d764fdce4a0d1095"
  _type = "plan_execution/CurrentStateQueryRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """AspRule[] query

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
  __slots__ = ['query']
  _slot_types = ['plan_execution/AspRule[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       query

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CurrentStateQueryRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.query is None:
        self.query = []
    else:
      self.query = []

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
      length = len(self.query)
      buff.write(_struct_I.pack(length))
      for val1 in self.query:
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
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.query is None:
        self.query = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.query = []
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
        self.query.append(val1)
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
      length = len(self.query)
      buff.write(_struct_I.pack(length))
      for val1 in self.query:
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
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.query is None:
        self.query = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.query = []
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
        self.query.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from plan_execution/CurrentStateQueryResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import plan_execution.msg

class CurrentStateQueryResponse(genpy.Message):
  _md5sum = "ede65e7da70fc603627007f333530693"
  _type = "plan_execution/CurrentStateQueryResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """AnswerSet answer

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
  __slots__ = ['answer']
  _slot_types = ['plan_execution/AnswerSet']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       answer

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CurrentStateQueryResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.answer is None:
        self.answer = plan_execution.msg.AnswerSet()
    else:
      self.answer = plan_execution.msg.AnswerSet()

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
      length = len(self.answer.fluents)
      buff.write(_struct_I.pack(length))
      for val1 in self.answer.fluents:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        length = len(val1.variables)
        buff.write(_struct_I.pack(length))
        for val2 in val1.variables:
          length = len(val2)
          if python3 or type(val2) == unicode:
            val2 = val2.encode('utf-8')
            length = len(val2)
          buff.write(struct.pack('<I%ss'%length, length, val2))
        buff.write(_get_struct_I().pack(val1.timeStep))
      buff.write(_get_struct_B().pack(self.answer.satisfied))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.answer is None:
        self.answer = plan_execution.msg.AnswerSet()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.answer.fluents = []
      for i in range(0, length):
        val1 = plan_execution.msg.AspFluent()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.variables = []
        for i in range(0, length):
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2 = str[start:end].decode('utf-8')
          else:
            val2 = str[start:end]
          val1.variables.append(val2)
        start = end
        end += 4
        (val1.timeStep,) = _get_struct_I().unpack(str[start:end])
        self.answer.fluents.append(val1)
      start = end
      end += 1
      (self.answer.satisfied,) = _get_struct_B().unpack(str[start:end])
      self.answer.satisfied = bool(self.answer.satisfied)
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
      length = len(self.answer.fluents)
      buff.write(_struct_I.pack(length))
      for val1 in self.answer.fluents:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        length = len(val1.variables)
        buff.write(_struct_I.pack(length))
        for val2 in val1.variables:
          length = len(val2)
          if python3 or type(val2) == unicode:
            val2 = val2.encode('utf-8')
            length = len(val2)
          buff.write(struct.pack('<I%ss'%length, length, val2))
        buff.write(_get_struct_I().pack(val1.timeStep))
      buff.write(_get_struct_B().pack(self.answer.satisfied))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.answer is None:
        self.answer = plan_execution.msg.AnswerSet()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.answer.fluents = []
      for i in range(0, length):
        val1 = plan_execution.msg.AspFluent()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.variables = []
        for i in range(0, length):
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2 = str[start:end].decode('utf-8')
          else:
            val2 = str[start:end]
          val1.variables.append(val2)
        start = end
        end += 4
        (val1.timeStep,) = _get_struct_I().unpack(str[start:end])
        self.answer.fluents.append(val1)
      start = end
      end += 1
      (self.answer.satisfied,) = _get_struct_B().unpack(str[start:end])
      self.answer.satisfied = bool(self.answer.satisfied)
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
class CurrentStateQuery(object):
  _type          = 'plan_execution/CurrentStateQuery'
  _md5sum = '2cbc1d643059afa4b61504739724cdfc'
  _request_class  = CurrentStateQueryRequest
  _response_class = CurrentStateQueryResponse
