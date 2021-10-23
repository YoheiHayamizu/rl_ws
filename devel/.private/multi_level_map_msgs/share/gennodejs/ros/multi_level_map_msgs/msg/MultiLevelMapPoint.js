// Auto-generated. Do not edit!

// (in-package multi_level_map_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class MultiLevelMapPoint {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.level_id = null;
      this.point = null;
    }
    else {
      if (initObj.hasOwnProperty('level_id')) {
        this.level_id = initObj.level_id
      }
      else {
        this.level_id = '';
      }
      if (initObj.hasOwnProperty('point')) {
        this.point = initObj.point
      }
      else {
        this.point = new geometry_msgs.msg.Point();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MultiLevelMapPoint
    // Serialize message field [level_id]
    bufferOffset = _serializer.string(obj.level_id, buffer, bufferOffset);
    // Serialize message field [point]
    bufferOffset = geometry_msgs.msg.Point.serialize(obj.point, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MultiLevelMapPoint
    let len;
    let data = new MultiLevelMapPoint(null);
    // Deserialize message field [level_id]
    data.level_id = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [point]
    data.point = geometry_msgs.msg.Point.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.level_id.length;
    return length + 28;
  }

  static datatype() {
    // Returns string type for a message object
    return 'multi_level_map_msgs/MultiLevelMapPoint';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c23d10c5d5876c43aeb09f6ec5564702';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string level_id
    geometry_msgs/Point point
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new MultiLevelMapPoint(null);
    if (msg.level_id !== undefined) {
      resolved.level_id = msg.level_id;
    }
    else {
      resolved.level_id = ''
    }

    if (msg.point !== undefined) {
      resolved.point = geometry_msgs.msg.Point.Resolve(msg.point)
    }
    else {
      resolved.point = new geometry_msgs.msg.Point()
    }

    return resolved;
    }
};

module.exports = MultiLevelMapPoint;
