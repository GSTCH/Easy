//*****************************************************************
//* Class JoystickAxis - Implementation
//*
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

#include <Arduino.h>
#include "JoystickAxis.h"
#include "..\Common\Log.h"
#include <Arduino.h>
#include <Math.h>

#define IMPOSIBLE_VALUE_TO_INIT_JOYSTICKAXIS 9999

#define CONSIDERED_MIN_CHANGE 5
#define DEATH_ZONE_WIDTH 20
#define CALIBRATION_LOOPS 20

#define ANALOG_PIN_RESOLUTION 1024 // Read position is 0...ANALOG_PIN_RESOLUTION
#define MAX_AXIS_VALUE 255 // Joystick value is 0...Abs(MAX_AXIS_VALUE)

//*************************************
#ifdef CREATE_ID_MANUALLY  
JoystickAxis::JoystickAxis (int aId, int aAnalogPin, bool aSwitchDirection) : Input(aId, CreateElementId(EbtInput, EkiAnalog, ANALOG_JOYSTICKAXIS_INDEX), 0, MAX_AXIS_VALUE)
{
  Init(aAnalogPin, aSwitchDirection);
}
#endif

//*************************************
JoystickAxis::JoystickAxis (int aAnalogPin, bool aSwitchDirection) : Input(CreateElementId(EbtInput, EkiAnalog, ANALOG_JOYSTICKAXIS_INDEX), 0, MAX_AXIS_VALUE)
{
  Init(aAnalogPin, aSwitchDirection);
}

//*************************************
void JoystickAxis::Init(int aAnalogPin, bool aSwitchDirection)
{
#ifdef LOG_SETUP
  GetLog()->printf("JA(%d):C P=%d", _id, aAnalogPin );
#endif
  _analogPin = aAnalogPin;
  _switchDirection = aSwitchDirection;

  _minPos = 0;
  _maxPos = ANALOG_PIN_RESOLUTION;

  _currentValue = _lastValue = IMPOSIBLE_VALUE_TO_INIT_JOYSTICKAXIS;
  _currentPos = _lastPos = IMPOSIBLE_VALUE_TO_INIT_JOYSTICKAXIS;
}

//*************************************
void JoystickAxis::Setup()
{
  calibrateCentre();
}

//*************************************
void JoystickAxis::Loop()
{
  _currentPos = analogRead(_analogPin);

  if (abs(_currentPos - _lastPos) > CONSIDERED_MIN_CHANGE)
  {
#ifdef LOG_LOOP_DEBUG
    GetLog()->printf("JA(%d):L Vl=%d", _id, _currentPos);
#endif
	  
    if (abs(_currentPos - _centerPos) < DEATH_ZONE_WIDTH)
    {
	  _lastPos = _currentPos;
      _currentPos = _centerPos;
	  _lastValue = _currentValue;
      _currentValue = 0;
#ifdef LOG_LOOP_DEBUG
      GetLog()->printf("JA(%d):L Mp1=0", _id );
#endif	  
    }
    else if (_currentPos > _centerPos)
    {	
      _lastPos = _currentPos;
	  _lastValue = _currentValue;
	  int axisValue = _currentPos - _centerPos;	
	  int axisRange = _maxPos - _centerPos;
	  _currentValue = map(axisValue, 0, axisRange, 0, MAX_AXIS_VALUE );
	  if (_switchDirection)
	  {
		_currentValue *= -1;
	  }
#ifdef LOG_LOOP_DEBUG
      GetLog()->printf("JA(%d):L GT CVl=%d, AVl=%d [0, %d][0, %d]", _id, _currentValue, axisValue, axisRange, MAX_AXIS_VALUE);
#endif
    }
    else if (_currentPos < _centerPos)
    {
	  _lastPos = _currentPos;
	  _lastValue = _currentValue;
	  int axisValue = _centerPos - _currentPos;	
	  int axisRange = _centerPos;
	  _currentValue = -map(axisValue, 0, axisRange, 0, MAX_AXIS_VALUE );
	  if (_switchDirection)
	  {
		_currentValue *= -1;
	  }
	  	
#ifdef LOG_LOOP_DEBUG
        GetLog()->printf("JA(%d):L LT CVl=%d, AVl=%d [0, %d][0, %d]", _id, _currentValue, axisValue, axisRange, MAX_AXIS_VALUE);
#endif
    }

#ifdef LOG_LOOP
    GetLog()->printf("JA(%d):L CVl=%d CPs=%d, LPs=%d", _id, _currentValue, _currentPos, _lastPos);
#endif
  }
  else
  {
#ifdef LOG_LOOP_DEBUG
 if (_lastPos!=_lastPos)
 {
    GetLog()->printf("JA(%d):L CPs=%d, LPs=%d", _id, _currentPos, _lastPos);
 }
#endif
  }
}

//*************************************
unsigned long JoystickAxis::Calibrate()
{
  unsigned long calibrate = 0;
  for (int i = 0; i <= CALIBRATION_LOOPS; ++i)
  {
    calibrate += analogRead(_analogPin);
    // The value has a Jitter. To get the middle value, we hat to wait a little before reading the next value.
    // Delay is in this case allowed because it's in Setup().
    delay(20);
  }

  // Integer division rounds itselfs
  return calibrate / CALIBRATION_LOOPS;
}

//*************************************
void JoystickAxis::calibrateCentre()
{
  _centerPos = Calibrate();

#ifdef LOG_SETUP
  GetLog()->printf("JA(%d):Ca Ctr=%d", _id, _centerPos);
#endif

}

//*************************************
void JoystickAxis::calibrateMax()
{
  _maxPos = Calibrate();

#ifdef LOG_SETUP
  GetLog()->printf("JA(%d):Ca Max=%d", _id, _maxPos);
#endif
}

//*************************************
void JoystickAxis::calibrateMin()
{
  _minPos = Calibrate();

#ifdef LOG_SETUP
  GetLog()->printf("JA(%d):Ca Min=%d", _id, _minPos);
#endif
}
