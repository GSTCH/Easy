//*****************************************************************
//* Class InputSelectedValue - Header
//*
//* Tool class to assign different input to a relation. For this
//* an input defines the index of the input to use. This is usualy
//* a switch with 2 or 3 positions.
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

#ifndef EASY_INPUTSELECTEDVALUE_H
#define EASY_INPUTSELECTEDVALUE_H

#include "..\Common\BuildDefinition.h" // has to be the first 
#include "..\Common\Types.h"
#include "..\Common\Log.h"
#include "..\Kernel\Input.h"

class InputSelectedValue : public Input {
private:

protected:
  Input* _selectionInput;
  Input** _inputValues;
  int _inputValueCount;
  int _lastSelection;
  int _currentSelection;
  bool _valueChanged;

  //*************************************
  virtual bool ValueChanged() {
    return _valueChanged;
  }

public:
  //*************************************
#ifdef CREATE_ID_MANUALLY	 
  InputSelectedValue(int aId, Input* aSelectionInput, Input** aInputValues, int aInputValuesCount)
    : Input(aId, CreateElementId(EbtInput, EkiHelper, HELPER_INPUTSELECTEDVALUE_INDEX), 0, 0) {
    _selectionInput = aSelectionInput;
    _inputValues = aInputValues;
    _inputValueCount = aInputValuesCount;
    _currentSelection = _lastSelection = -1;
    _valueChanged = true;
  }
#endif

  //*************************************
  InputSelectedValue(Input* aSelectionInput, Input** aInputValues, int aInputValuesCount)
    : Input(CreateElementId(EbtInput, EkiHelper, INHELPER_INPUTSELECTEDVALUE_INDEX), 0, 0) {
    _selectionInput = aSelectionInput;
    _inputValues = aInputValues;
    _inputValueCount = aInputValuesCount;
    _currentSelection = _lastSelection = -1;
    _valueChanged = true;
  }
  
  //*************************************
  InputSelectedValue(Input* aSelectionInput, Input* aInputValue1, Input* aInputValue2)
    : Input(CreateElementId(EbtInput, EkiHelper, INHELPER_INPUTSELECTEDVALUE_INDEX), 0, 0) {
    _selectionInput = aSelectionInput;
    _inputValues = new Input*[2];
	_inputValues[0] = aInputValue1;
	_inputValues[1] = aInputValue2;
    _inputValueCount = 2;
    _currentSelection = _lastSelection = -1;
    _valueChanged = true;
  }

  //*************************************
  InputSelectedValue(Input* aSelectionInput, Input* aInputValue1, Input* aInputValue2, Input* aInputValue3)
    : Input(CreateElementId(EbtInput, EkiHelper, INHELPER_INPUTSELECTEDVALUE_INDEX), 0, 0) {
    _selectionInput = aSelectionInput;
    _inputValues = new Input*[3];
	_inputValues[0] = aInputValue1;
	_inputValues[1] = aInputValue2;
	_inputValues[2] = aInputValue3;
    _inputValueCount = 2;
    _currentSelection = _lastSelection = -1;
    _valueChanged = true;
  }   

  //*************************************
  void Loop() {
    _lastValue = _currentValue;
    _lastSelection = _currentSelection;
    _valueChanged = false;

    _currentSelection = _selectionInput->Value();
    bool modeChanged = false;
    if (_currentSelection != _lastSelection) {
      modeChanged = true;
      _valueChanged = true;
    }

    if (_currentSelection >= 0 && _currentSelection < _inputValueCount) {
      int value = _inputValues[_currentSelection]->Value();      
      if (value != _currentValue) {
        _valueChanged = true;
        _currentValue = value;
      } 

      if (modeChanged) {
        _minValue = _inputValues[_currentSelection]->GetMinValue();
        _maxValue = _inputValues[_currentSelection]->GetMaxValue();
      }

#ifdef LOG_LOOP_DEBUG
      if (ValueChanged()) {
        GetLog()->printf("IS(%d):L M=%d, Min=%d, Max=%d, CVl=%d, LVl=%d", _id, _currentSelection, _minValue, _maxValue, _currentValue, _lastValue);
      }
#endif
    } else {
#ifdef LOG_LOOP
      GetLog()->printf("IS(%d):L V=%d > %d", _id, _currentSelection, _inputValueCount);
#endif
    }
  }
};
#endif
