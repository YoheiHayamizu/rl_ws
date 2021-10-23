
"use strict";

let ImageQuestion = require('./ImageQuestion.js')
let ScavHunt = require('./ScavHunt.js')
let ResolveChangeFloor = require('./ResolveChangeFloor.js')
let ActionUpdate = require('./ActionUpdate.js')
let UploadImage = require('./UploadImage.js')
let QuestionDialog = require('./QuestionDialog.js')
let GetNextImage = require('./GetNextImage.js')
let NextLocation = require('./NextLocation.js')
let LEDTestStrip = require('./LEDTestStrip.js')
let LEDClear = require('./LEDClear.js')
let SaveImageResponse = require('./SaveImageResponse.js')
let DoorHandlerInterface = require('./DoorHandlerInterface.js')
let LocationAction = require('./LocationAction.js')
let StopBase = require('./StopBase.js')
let UpdateObject = require('./UpdateObject.js')
let LEDSetStatus = require('./LEDSetStatus.js')
let RobotTeleporterInterface = require('./RobotTeleporterInterface.js')
let Trigger = require('./Trigger.js')
let SemanticParser = require('./SemanticParser.js')

module.exports = {
  ImageQuestion: ImageQuestion,
  ScavHunt: ScavHunt,
  ResolveChangeFloor: ResolveChangeFloor,
  ActionUpdate: ActionUpdate,
  UploadImage: UploadImage,
  QuestionDialog: QuestionDialog,
  GetNextImage: GetNextImage,
  NextLocation: NextLocation,
  LEDTestStrip: LEDTestStrip,
  LEDClear: LEDClear,
  SaveImageResponse: SaveImageResponse,
  DoorHandlerInterface: DoorHandlerInterface,
  LocationAction: LocationAction,
  StopBase: StopBase,
  UpdateObject: UpdateObject,
  LEDSetStatus: LEDSetStatus,
  RobotTeleporterInterface: RobotTeleporterInterface,
  Trigger: Trigger,
  SemanticParser: SemanticParser,
};
