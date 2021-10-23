
"use strict";

let Authenticate = require('./Authenticate.js')
let GoToLocation = require('./GoToLocation.js')
let RequestTour = require('./RequestTour.js')
let PingTour = require('./PingTour.js')
let Rotate = require('./Rotate.js')
let GetTourState = require('./GetTourState.js')
let LeaveTour = require('./LeaveTour.js')
let GoBesideLocation = require('./GoBesideLocation.js')

module.exports = {
  Authenticate: Authenticate,
  GoToLocation: GoToLocation,
  RequestTour: RequestTour,
  PingTour: PingTour,
  Rotate: Rotate,
  GetTourState: GetTourState,
  LeaveTour: LeaveTour,
  GoBesideLocation: GoBesideLocation,
};
