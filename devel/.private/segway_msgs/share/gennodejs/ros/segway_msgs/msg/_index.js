
"use strict";

let Status = require('./Status.js');
let Configuration = require('./Configuration.js');
let AuxPower = require('./AuxPower.js');
let ConfigCmd = require('./ConfigCmd.js');
let Propulsion = require('./Propulsion.js');
let Dynamics = require('./Dynamics.js');
let SuperAux = require('./SuperAux.js');
let Faultlog = require('./Faultlog.js');

module.exports = {
  Status: Status,
  Configuration: Configuration,
  AuxPower: AuxPower,
  ConfigCmd: ConfigCmd,
  Propulsion: Propulsion,
  Dynamics: Dynamics,
  SuperAux: SuperAux,
  Faultlog: Faultlog,
};
