// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: RobiTheWinnerDisplay

#ifndef _ROBITHEWINNERDISPLAY_UI_H
#define _ROBITHEWINNERDISPLAY_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"


// SCREEN: ui_StartGameScreen
void ui_StartGameScreen_screen_init(void);
extern lv_obj_t * ui_StartGameScreen;
extern lv_obj_t * ui_Image2;
extern lv_obj_t * ui_LabelBallsToPlay;
extern lv_obj_t * ui_LabelTextBallsToPlay;
extern lv_obj_t * ui_Label9;
void ui_event_ButtonChangeBallAmount(lv_event_t * e);
extern lv_obj_t * ui_ButtonChangeBallAmount;
extern lv_obj_t * ui_LabelChangeAmountOfBall;
void ui_event_ButtonPlay(lv_event_t * e);
extern lv_obj_t * ui_ButtonPlay;
extern lv_obj_t * ui_LabelButtonPlay;
extern lv_obj_t * ui_LabelWinsAlways;
extern lv_obj_t * ui_LabelInstructions;
// CUSTOM VARIABLES

// SCREEN: ui_SettingScreen
void ui_SettingScreen_screen_init(void);
extern lv_obj_t * ui_SettingScreen;
extern lv_obj_t * ui_Image1;
void ui_event_SliderBallAmount(lv_event_t * e);
extern lv_obj_t * ui_SliderBallAmount;
extern lv_obj_t * ui_LabelBallAmountText;
extern lv_obj_t * ui_LabelNumberOfBall;
void ui_event_ButtonlessBall(lv_event_t * e);
extern lv_obj_t * ui_ButtonlessBall;
extern lv_obj_t * ui_LabelWeniger;
void ui_event_ButtonMoreBall(lv_event_t * e);
extern lv_obj_t * ui_ButtonMoreBall;
extern lv_obj_t * ui_LabelMehr;
void ui_event_ButtonSettingOk(lv_event_t * e);
extern lv_obj_t * ui_ButtonSettingOk;
extern lv_obj_t * ui_LabelButtonSettingOk;
// CUSTOM VARIABLES

// SCREEN: ui_PlayScreen
void ui_PlayScreen_screen_init(void);
extern lv_obj_t * ui_PlayScreen;
extern lv_obj_t * ui_Label14;
void ui_event_ButtonOneBall(lv_event_t * e);
extern lv_obj_t * ui_ButtonOneBall;
extern lv_obj_t * ui_LabelButtonOneBall;
void ui_event_ButtonTwoBall(lv_event_t * e);
extern lv_obj_t * ui_ButtonTwoBall;
extern lv_obj_t * ui_LabelButtonTwoBall;
void ui_event_ButtonThreeBall(lv_event_t * e);
extern lv_obj_t * ui_ButtonThreeBall;
extern lv_obj_t * ui_LabelButtonThreeBall;
extern lv_obj_t * ui_LabelRobiSpielt;
extern lv_obj_t * ui_LabelRobiBallAmount;
extern lv_obj_t * ui_LabelBallRemainingInGameText;
extern lv_obj_t * ui_LabelRemainingInGame;
void ui_event_ButtonGameEnd(lv_event_t * e);
extern lv_obj_t * ui_ButtonGameEnd;
extern lv_obj_t * ui_Label26;
extern lv_obj_t * ui_Image3;
// CUSTOM VARIABLES

// EVENTS

extern lv_obj_t * ui____initial_actions0;

// IMAGES AND IMAGE SETS
LV_IMG_DECLARE(ui_img_arduinoeasy_logoprint_png);    // assets/ArduinoEasy_LogoPrint.png

// FONTS
LV_FONT_DECLARE(ui_font_SanSerif15);
LV_FONT_DECLARE(ui_font_SanSerif17);
LV_FONT_DECLARE(ui_font_SansSerif25);

// UI INIT
void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
