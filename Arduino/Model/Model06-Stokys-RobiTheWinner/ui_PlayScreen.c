// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: RobiTheWinnerDisplay

#include "ui.h"

void ui_PlayScreen_screen_init(void)
{
    ui_PlayScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_PlayScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_text_font(ui_PlayScreen, &ui_font_SanSerif17, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label14 = lv_label_create(ui_PlayScreen);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label14, 0);
    lv_obj_set_y(ui_Label14, 2);
    lv_obj_set_align(ui_Label14, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label14, "Dein Zug: Wie viele Bälle wählst du?");

    ui_ButtonOneBall = lv_btn_create(ui_PlayScreen);
    lv_obj_set_width(ui_ButtonOneBall, 50);
    lv_obj_set_height(ui_ButtonOneBall, 50);
    lv_obj_set_x(ui_ButtonOneBall, 53);
    lv_obj_set_y(ui_ButtonOneBall, 30);
    lv_obj_add_flag(ui_ButtonOneBall, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonOneBall, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LabelButtonOneBall = lv_label_create(ui_ButtonOneBall);
    lv_obj_set_width(ui_LabelButtonOneBall, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelButtonOneBall, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonOneBall, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonOneBall, "1");

    ui_ButtonTwoBall = lv_btn_create(ui_PlayScreen);
    lv_obj_set_width(ui_ButtonTwoBall, 50);
    lv_obj_set_height(ui_ButtonTwoBall, 50);
    lv_obj_set_x(ui_ButtonTwoBall, 0);
    lv_obj_set_y(ui_ButtonTwoBall, 30);
    lv_obj_set_align(ui_ButtonTwoBall, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_ButtonTwoBall, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonTwoBall, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LabelButtonTwoBall = lv_label_create(ui_ButtonTwoBall);
    lv_obj_set_width(ui_LabelButtonTwoBall, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelButtonTwoBall, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonTwoBall, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonTwoBall, "2");

    ui_ButtonThreeBall = lv_btn_create(ui_PlayScreen);
    lv_obj_set_width(ui_ButtonThreeBall, 50);
    lv_obj_set_height(ui_ButtonThreeBall, 50);
    lv_obj_set_x(ui_ButtonThreeBall, -53);
    lv_obj_set_y(ui_ButtonThreeBall, 30);
    lv_obj_set_align(ui_ButtonThreeBall, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_ButtonThreeBall, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonThreeBall, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LabelButtonThreeBall = lv_label_create(ui_ButtonThreeBall);
    lv_obj_set_width(ui_LabelButtonThreeBall, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelButtonThreeBall, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelButtonThreeBall, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelButtonThreeBall, "3");

    ui_LabelRobiSpielt = lv_label_create(ui_PlayScreen);
    lv_obj_set_width(ui_LabelRobiSpielt, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelRobiSpielt, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelRobiSpielt, 2);
    lv_obj_set_y(ui_LabelRobiSpielt, -1);
    lv_obj_set_align(ui_LabelRobiSpielt, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelRobiSpielt, "Robi nimmt     Bälle");

    ui_LabelRobiBallAmount = lv_label_create(ui_PlayScreen);
    lv_obj_set_width(ui_LabelRobiBallAmount, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelRobiBallAmount, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelRobiBallAmount, 26);
    lv_obj_set_y(ui_LabelRobiBallAmount, -3);
    lv_obj_set_align(ui_LabelRobiBallAmount, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelRobiBallAmount, "2");
    lv_obj_set_style_text_font(ui_LabelRobiBallAmount, &ui_font_SansSerif25, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelBallRemainingInGameText = lv_label_create(ui_PlayScreen);
    lv_obj_set_width(ui_LabelBallRemainingInGameText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelBallRemainingInGameText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelBallRemainingInGameText, -2);
    lv_obj_set_y(ui_LabelBallRemainingInGameText, -24);
    lv_obj_set_align(ui_LabelBallRemainingInGameText, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_LabelBallRemainingInGameText, "Es verbleiben          Bälle im Spiel");

    ui_LabelRemainingInGame = lv_label_create(ui_PlayScreen);
    lv_obj_set_width(ui_LabelRemainingInGame, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelRemainingInGame, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelRemainingInGame, -1);
    lv_obj_set_y(ui_LabelRemainingInGame, -21);
    lv_obj_set_align(ui_LabelRemainingInGame, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_LabelRemainingInGame, "45");
    lv_obj_set_style_text_font(ui_LabelRemainingInGame, &ui_font_SansSerif25, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonGameEnd = lv_btn_create(ui_PlayScreen);
    lv_obj_set_width(ui_ButtonGameEnd, 196);
    lv_obj_set_height(ui_ButtonGameEnd, 50);
    lv_obj_set_x(ui_ButtonGameEnd, 0);
    lv_obj_set_y(ui_ButtonGameEnd, 43);
    lv_obj_set_align(ui_ButtonGameEnd, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonGameEnd, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonGameEnd, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonGameEnd, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonGameEnd, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_ButtonGameEnd, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ButtonGameEnd, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label26 = lv_label_create(ui_ButtonGameEnd);
    lv_obj_set_width(ui_Label26, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label26, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label26, -1);
    lv_obj_set_y(ui_Label26, 1);
    lv_obj_set_align(ui_Label26, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label26, "Du hast verloren!");
    lv_obj_set_style_text_color(ui_Label26, lv_color_hex(0xFFFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label26, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image3 = lv_img_create(ui_PlayScreen);
    lv_img_set_src(ui_Image3, &ui_img_arduinoeasy_logoprint_png);
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);   /// 76
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT);    /// 18
    lv_obj_set_align(ui_Image3, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_ButtonOneBall, ui_event_ButtonOneBall, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonTwoBall, ui_event_ButtonTwoBall, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonThreeBall, ui_event_ButtonThreeBall, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonGameEnd, ui_event_ButtonGameEnd, LV_EVENT_ALL, NULL);

}
