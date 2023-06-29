//*****************************************************************
//* Example 11-Tow motors, one turns after the other
//*
//* Two motors, one movement after the other. First toggles between limit switches.
//* Second motor turns some seconds when the first motor is at a end position.
//* When the seconds motors stops, first motor start with inverted direction.
//*
//* Hardware:
//* - 2 DC motor
//* - Shield(s) to control motors
//* - Potentiometer 10kOhm
//* - Switch On/Off
//*****************************************************************
//* Sketch made Easy for Arduino -  Arduino quick and easy
//
//* (C) written in 2023 by Hans Rothenbühler. All right reserved.
//*
//* https://github.com/GSTCH/Easy
//*
//* GNU GENERAL PUBLIC LICENSE, Version 2:
//* This program is free software; you can redistribute it and/or modify
//* it under the terms of the GNU General Public License as published by
//* the Free Software Foundation; either version 2 of the License, or
//* (at your option) any later version.
//*****************************************************************

#include <Easy.h>
//*****************************************************************
// Parameter Motor L298
#define MOTOR_SPEEDPIN 10
#define MOTOR_DIRECTIONPIN 12
// Parameter Motor L9110
#define MOTOR_PINA1 10
#define MOTOR_PINB1 12
#define MOTOR_PINA2 3
#define MOTOR_PINB2 4
// Parameter I2C Motor
#define MOTOR_NUMBER 2
// Parameter MainSwitch
#define MAIN_SWITCH_PIN 14
// Parameter variable Input
#define VARIABLE_INPUT_PIN A0
// ToggleSwitch
#define DIRECTION_PIN1 43  // NANO_DIRECTION_PIN1 5
#define DIRECTION_PIN2 41  // NANO_DIRECTION_PIN2 6

// Parameters Monoflop end switch
#define MONOFLOP_LEFT_PIN 43
#define MONOFLOP_LEFT_HIGH_DELAY 5000
#define MONOFLOP_LEFT_LOW_DELAY 200
#define MONOFLOP_RIGHT_PIN 41
#define MONOFLOP_RIGHT_HIGH_DELAY 5000
#define MONOFLOP_RIGHT_LOW_DELAY 200

void setup() {
  //((*** Initialize: Configure your sketch here....
  //** Define Actuators:
  // Different motor shields are supported, some are comment. Change comment and chose your motor shield.
  //MotorL298* motor = new MotorL298(MOTOR_DIRECTIONPIN, MOTOR_SPEEDPIN);
  //MotorL9110* motor = new MotorL9110(MOTOR_PINA1, MOTOR_PINB1);
  MotorI2C* motorToogles = new MotorI2C(MOTOR_NUMBER);                // Create toggeling motor
  MotorL9110* motorTimed = new MotorL9110(MOTOR_PINA2, MOTOR_PINB2);  // Create following motor

  //** Define Input
  // Main switch to start/stop all.
  Switch2Position* mainSwitch = new Switch2Position(MAIN_SWITCH_PIN);

  // Create the speed inputs
  VariableInput* motorSpeed = new VariableInput(VARIABLE_INPUT_PIN);
  Inverter* inverter = new Inverter(motorSpeed);
  FixValue* stopSpeed = FixValue::Off();

  // Define input monoflop to the limit switch, they turn the move of toggeling motor
  MonoFlop* monoFlopLeft = new MonoFlop(MONOFLOP_LEFT_PIN, MONOFLOP_LEFT_HIGH_DELAY, MONOFLOP_LEFT_LOW_DELAY, false);
  MonoFlop* monoFlopRight = new MonoFlop(MONOFLOP_RIGHT_PIN, MONOFLOP_RIGHT_HIGH_DELAY, MONOFLOP_RIGHT_LOW_DELAY, false);

  //** Define logic with condition and relation
  // ActuatorCollections are used because more than one actuator depends on the same condition.
  // Because each ActuatorCollectionItems has its own input, the Relation has no input (NULL).

  // Relation 1: Toggle motor reach limit switch left. Timed motor start for a defined time (backward).
  LogicCondition* monoFlopLeftHigh = new LogicCondition(mainSwitch, OpEQ, Switch2Position::On, LgAND, monoFlopLeft, OpEQ, mfStateHigh);
  ActuatorCollection* toggleMotorStopDelayMotorStartBackward = new ActuatorCollection(motorToogles, stopSpeed, motorTimed, inverter);
  Relation1to1* toggleMotorReachLimitSwitchLeft = new Relation1to1(monoFlopLeftHigh, toggleMotorStopDelayMotorStartBackward, NULL);

  // Relation 2: Timer duration ended, stop timed motor and start toggle motor in direction to right
  LogicCondition* monoFlopLeftHighTimerEnd = new LogicCondition(mainSwitch, OpEQ, Switch2Position::On, LgAND, monoFlopLeft, OpEQ, mfStateHighTimerEnd);
  ActuatorCollection* toggleMotorStopDelayMotorStartToRight = new ActuatorCollection(motorToogles, motorSpeed, motorTimed, stopSpeed);
  Relation1to1* timedMotorStopToggleMotorStartToRight = new Relation1to1(monoFlopLeftHighTimerEnd, toggleMotorStopDelayMotorStartToRight, NULL);

  // Relation 3: Toggle motor reach limit switch right. Timed motor start for a defined time (forward).
  LogicCondition* monoFlopRightHigh = new LogicCondition(mainSwitch, OpEQ, Switch2Position::On, LgAND, monoFlopRight, OpEQ, mfStateHigh);
  ActuatorCollection* toggleMotorStopDelayMotorStartForward = new ActuatorCollection(motorToogles, stopSpeed, motorTimed, motorSpeed);
  Relation1to1* motorTimedStartRight = new Relation1to1(monoFlopRightHigh, toggleMotorStopDelayMotorStartForward, NULL);

  // Relation 4: Timer duration ended, stop timed motor and start toggle motor in direction to left
  LogicCondition* monoFlopRightHighTimerEnd = new LogicCondition(mainSwitch, OpEQ, 1, LgAND, monoFlopRight, OpEQ, mfStateHighTimerEnd);
  ActuatorCollection* toggleMotorStopDelayMotorStartToLeft = new ActuatorCollection(motorToogles, inverter, motorTimed, stopSpeed);
  Relation1to1* timedMotorStopToggleMotorStartToLeft = new Relation1to1(monoFlopRightHighTimerEnd, toggleMotorStopDelayMotorStartToLeft, NULL);

  // Relation 5: Imidiately stop when main switch goes to low.
  CompareCondition* motorStopCondition = new CompareCondition(mainSwitch, OpEQ, Switch2Position::Off);
// A different notation is used here. Up to 4 items are possible per constructor argument (as above),
// this kind can contain any number of ActuatorCollectionItems.
// A define is used for readability. It's not a const because they uses memory.
#define ACTUATOR_COLLLECTION_ITEM_SIZE 2
  ActuatorCollectionItem** stopAllMotors = new ActuatorCollectionItem*[ACTUATOR_COLLLECTION_ITEM_SIZE];
  stopAllMotors[0] = new ActuatorCollectionItem(motorToogles, stopSpeed);
  stopAllMotors[1] = new ActuatorCollectionItem(motorTimed, stopSpeed);
  Relation1to1* relationStopAllMotors = new Relation1to1(motorStopCondition, stopAllMotors, ACTUATOR_COLLLECTION_ITEM_SIZE);

  // Relation 6: Start motor when its position is between the limit switches, when main switch goes to high.
  // For this a logic condition is used. During operation it doubles the action, but that doesn't matter because it is filtered.
  CompareCondition* mainSwitchOnCondition = new CompareCondition(mainSwitch, OpEQ, Switch2Position::On);
  LogicCondition* motorTurnDirectionCondition = new LogicCondition(monoFlopRight, OpEQ, mfStateHighTimerRun, LgOR, monoFlopRight, OpEQ, mfStateHighTimerEnd);
  ConditionInput* startSpeed = new ConditionInput(motorTurnDirectionCondition, inverter, motorSpeed);
  Relation1to1* relationMotorAutomaticStart = new Relation1to1(mainSwitchOnCondition, motorToogles, startSpeed);
  // ***))

  // Initialize control
  ControlManagerFactory::GetControlManager()->Setup();
}

//*****************************************************************
void loop() {
  //*** Run: No additional code is required
  ControlManagerFactory::GetControlManager()->Loop();

  // Depending on Arduino it needs a short delay. Do not add any other delays!
  delay(5);
}