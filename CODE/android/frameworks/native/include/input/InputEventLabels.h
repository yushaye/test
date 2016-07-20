/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _LIBINPUT_INPUT_EVENT_LABELS_H
#define _LIBINPUT_INPUT_EVENT_LABELS_H

#include <input/Input.h>
#include <android/keycodes.h>

#define DEFINE_KEYCODE(key) { #key, AKEYCODE_##key }
#define DEFINE_AXIS(axis) { #axis, AMOTION_EVENT_AXIS_##axis }
#define DEFINE_LED(led) { #led, ALED_##led }
#define DEFINE_FLAG(flag) { #flag, POLICY_FLAG_##flag }

namespace android {

template<typename T, size_t N>
size_t size(T (&)[N]) { return N; }

struct InputEventLabel {
    const char *literal;
    int value;
};


static const InputEventLabel KEYCODES[] = {
    // NOTE: If you add a new keycode here you must also add it to several other files.
    //       Refer to frameworks/base/core/java/android/view/KeyEvent.java for the full list.
    DEFINE_KEYCODE(UNKNOWN),
    DEFINE_KEYCODE(SOFT_LEFT),
    DEFINE_KEYCODE(SOFT_RIGHT),
    DEFINE_KEYCODE(HOME),
    DEFINE_KEYCODE(BACK),
    DEFINE_KEYCODE(CALL),
    DEFINE_KEYCODE(ENDCALL),
    DEFINE_KEYCODE(0),
    DEFINE_KEYCODE(1),
    DEFINE_KEYCODE(2),
    DEFINE_KEYCODE(3),
    DEFINE_KEYCODE(4),
    DEFINE_KEYCODE(5),
    DEFINE_KEYCODE(6),
    DEFINE_KEYCODE(7),
    DEFINE_KEYCODE(8),
    DEFINE_KEYCODE(9),
    DEFINE_KEYCODE(STAR),
    DEFINE_KEYCODE(POUND),
    DEFINE_KEYCODE(DPAD_UP),
    DEFINE_KEYCODE(DPAD_DOWN),
    DEFINE_KEYCODE(DPAD_LEFT),
    DEFINE_KEYCODE(DPAD_RIGHT),
    DEFINE_KEYCODE(DPAD_CENTER),
    DEFINE_KEYCODE(VOLUME_UP),
    DEFINE_KEYCODE(VOLUME_DOWN),
    DEFINE_KEYCODE(POWER),
    DEFINE_KEYCODE(CAMERA),
    DEFINE_KEYCODE(CLEAR),
    DEFINE_KEYCODE(A),
    DEFINE_KEYCODE(B),
    DEFINE_KEYCODE(C),
    DEFINE_KEYCODE(D),
    DEFINE_KEYCODE(E),
    DEFINE_KEYCODE(F),
    DEFINE_KEYCODE(G),
    DEFINE_KEYCODE(H),
    DEFINE_KEYCODE(I),
    DEFINE_KEYCODE(J),
    DEFINE_KEYCODE(K),
    DEFINE_KEYCODE(L),
    DEFINE_KEYCODE(M),
    DEFINE_KEYCODE(N),
    DEFINE_KEYCODE(O),
    DEFINE_KEYCODE(P),
    DEFINE_KEYCODE(Q),
    DEFINE_KEYCODE(R),
    DEFINE_KEYCODE(S),
    DEFINE_KEYCODE(T),
    DEFINE_KEYCODE(U),
    DEFINE_KEYCODE(V),
    DEFINE_KEYCODE(W),
    DEFINE_KEYCODE(X),
    DEFINE_KEYCODE(Y),
    DEFINE_KEYCODE(Z),
    DEFINE_KEYCODE(COMMA),
    DEFINE_KEYCODE(PERIOD),
    DEFINE_KEYCODE(ALT_LEFT),
    DEFINE_KEYCODE(ALT_RIGHT),
    DEFINE_KEYCODE(SHIFT_LEFT),
    DEFINE_KEYCODE(SHIFT_RIGHT),
    DEFINE_KEYCODE(TAB),
    DEFINE_KEYCODE(SPACE),
    DEFINE_KEYCODE(SYM),
    DEFINE_KEYCODE(EXPLORER),
    DEFINE_KEYCODE(ENVELOPE),
    DEFINE_KEYCODE(ENTER),
    DEFINE_KEYCODE(DEL),
    DEFINE_KEYCODE(GRAVE),
    DEFINE_KEYCODE(MINUS),
    DEFINE_KEYCODE(EQUALS),
    DEFINE_KEYCODE(LEFT_BRACKET),
    DEFINE_KEYCODE(RIGHT_BRACKET),
    DEFINE_KEYCODE(BACKSLASH),
    DEFINE_KEYCODE(SEMICOLON),
    DEFINE_KEYCODE(APOSTROPHE),
    DEFINE_KEYCODE(SLASH),
    DEFINE_KEYCODE(AT),
    DEFINE_KEYCODE(NUM),
    DEFINE_KEYCODE(HEADSETHOOK),
    DEFINE_KEYCODE(FOCUS),   // *Camera* focus
    DEFINE_KEYCODE(PLUS),
    DEFINE_KEYCODE(MENU),
    DEFINE_KEYCODE(NOTIFICATION),
    DEFINE_KEYCODE(SEARCH),
    DEFINE_KEYCODE(MEDIA_PLAY_PAUSE),
    DEFINE_KEYCODE(MEDIA_STOP),
    DEFINE_KEYCODE(MEDIA_NEXT),
    DEFINE_KEYCODE(MEDIA_PREVIOUS),
    DEFINE_KEYCODE(MEDIA_REWIND),
    DEFINE_KEYCODE(MEDIA_FAST_FORWARD),
    DEFINE_KEYCODE(MUTE),
    DEFINE_KEYCODE(PAGE_UP),
    DEFINE_KEYCODE(PAGE_DOWN),
    DEFINE_KEYCODE(PICTSYMBOLS),
    DEFINE_KEYCODE(SWITCH_CHARSET),
    DEFINE_KEYCODE(BUTTON_A),
    DEFINE_KEYCODE(BUTTON_B),
    DEFINE_KEYCODE(BUTTON_C),
    DEFINE_KEYCODE(BUTTON_X),
    DEFINE_KEYCODE(BUTTON_Y),
    DEFINE_KEYCODE(BUTTON_Z),
    DEFINE_KEYCODE(BUTTON_L1),
    DEFINE_KEYCODE(BUTTON_R1),
    DEFINE_KEYCODE(BUTTON_L2),
    DEFINE_KEYCODE(BUTTON_R2),
    DEFINE_KEYCODE(BUTTON_THUMBL),
    DEFINE_KEYCODE(BUTTON_THUMBR),
    DEFINE_KEYCODE(BUTTON_START),
    DEFINE_KEYCODE(BUTTON_SELECT),
    DEFINE_KEYCODE(BUTTON_MODE),
    DEFINE_KEYCODE(ESCAPE),
    DEFINE_KEYCODE(FORWARD_DEL),
    DEFINE_KEYCODE(CTRL_LEFT),
    DEFINE_KEYCODE(CTRL_RIGHT),
    DEFINE_KEYCODE(CAPS_LOCK),
    DEFINE_KEYCODE(SCROLL_LOCK),
    DEFINE_KEYCODE(META_LEFT),
    DEFINE_KEYCODE(META_RIGHT),
    DEFINE_KEYCODE(FUNCTION),
    DEFINE_KEYCODE(SYSRQ),
    DEFINE_KEYCODE(BREAK),
    DEFINE_KEYCODE(MOVE_HOME),
    DEFINE_KEYCODE(MOVE_END),
    DEFINE_KEYCODE(INSERT),
    DEFINE_KEYCODE(FORWARD),
    DEFINE_KEYCODE(MEDIA_PLAY),
    DEFINE_KEYCODE(MEDIA_PAUSE),
    DEFINE_KEYCODE(MEDIA_CLOSE),
    DEFINE_KEYCODE(MEDIA_EJECT),
    DEFINE_KEYCODE(MEDIA_RECORD),
    DEFINE_KEYCODE(F1),
    DEFINE_KEYCODE(F2),
    DEFINE_KEYCODE(F3),
    DEFINE_KEYCODE(F4),
    DEFINE_KEYCODE(F5),
    DEFINE_KEYCODE(F6),
    DEFINE_KEYCODE(F7),
    DEFINE_KEYCODE(F8),
    DEFINE_KEYCODE(F9),
    DEFINE_KEYCODE(F10),
    DEFINE_KEYCODE(F11),
    DEFINE_KEYCODE(F12),
    DEFINE_KEYCODE(NUM_LOCK),
    DEFINE_KEYCODE(NUMPAD_0),
    DEFINE_KEYCODE(NUMPAD_1),
    DEFINE_KEYCODE(NUMPAD_2),
    DEFINE_KEYCODE(NUMPAD_3),
    DEFINE_KEYCODE(NUMPAD_4),
    DEFINE_KEYCODE(NUMPAD_5),
    DEFINE_KEYCODE(NUMPAD_6),
    DEFINE_KEYCODE(NUMPAD_7),
    DEFINE_KEYCODE(NUMPAD_8),
    DEFINE_KEYCODE(NUMPAD_9),
    DEFINE_KEYCODE(NUMPAD_DIVIDE),
    DEFINE_KEYCODE(NUMPAD_MULTIPLY),
    DEFINE_KEYCODE(NUMPAD_SUBTRACT),
    DEFINE_KEYCODE(NUMPAD_ADD),
    DEFINE_KEYCODE(NUMPAD_DOT),
    DEFINE_KEYCODE(NUMPAD_COMMA),
    DEFINE_KEYCODE(NUMPAD_ENTER),
    DEFINE_KEYCODE(NUMPAD_EQUALS),
    DEFINE_KEYCODE(NUMPAD_LEFT_PAREN),
    DEFINE_KEYCODE(NUMPAD_RIGHT_PAREN),
    DEFINE_KEYCODE(VOLUME_MUTE),
    DEFINE_KEYCODE(INFO),
    DEFINE_KEYCODE(CHANNEL_UP),
    DEFINE_KEYCODE(CHANNEL_DOWN),
    DEFINE_KEYCODE(ZOOM_IN),
    DEFINE_KEYCODE(ZOOM_OUT),
    DEFINE_KEYCODE(TV),
    DEFINE_KEYCODE(WINDOW),
    DEFINE_KEYCODE(GUIDE),
    DEFINE_KEYCODE(DVR),
    DEFINE_KEYCODE(BOOKMARK),
    DEFINE_KEYCODE(CAPTIONS),
    DEFINE_KEYCODE(SETTINGS),
    DEFINE_KEYCODE(TV_POWER),
    DEFINE_KEYCODE(TV_INPUT),
    DEFINE_KEYCODE(STB_POWER),
    DEFINE_KEYCODE(STB_INPUT),
    DEFINE_KEYCODE(AVR_POWER),
    DEFINE_KEYCODE(AVR_INPUT),
    DEFINE_KEYCODE(PROG_RED),
    DEFINE_KEYCODE(PROG_GREEN),
    DEFINE_KEYCODE(PROG_YELLOW),
    DEFINE_KEYCODE(PROG_BLUE),
    DEFINE_KEYCODE(APP_SWITCH),
    DEFINE_KEYCODE(BUTTON_1),
    DEFINE_KEYCODE(BUTTON_2),
    DEFINE_KEYCODE(BUTTON_3),
    DEFINE_KEYCODE(BUTTON_4),
    DEFINE_KEYCODE(BUTTON_5),
    DEFINE_KEYCODE(BUTTON_6),
    DEFINE_KEYCODE(BUTTON_7),
    DEFINE_KEYCODE(BUTTON_8),
    DEFINE_KEYCODE(BUTTON_9),
    DEFINE_KEYCODE(BUTTON_10),
    DEFINE_KEYCODE(BUTTON_11),
    DEFINE_KEYCODE(BUTTON_12),
    DEFINE_KEYCODE(BUTTON_13),
    DEFINE_KEYCODE(BUTTON_14),
    DEFINE_KEYCODE(BUTTON_15),
    DEFINE_KEYCODE(BUTTON_16),
    DEFINE_KEYCODE(LANGUAGE_SWITCH),
    DEFINE_KEYCODE(MANNER_MODE),
    DEFINE_KEYCODE(3D_MODE),
    DEFINE_KEYCODE(CONTACTS),
    DEFINE_KEYCODE(CALENDAR),
    DEFINE_KEYCODE(MUSIC),
    DEFINE_KEYCODE(CALCULATOR),
    DEFINE_KEYCODE(ZENKAKU_HANKAKU),
    DEFINE_KEYCODE(EISU),
    DEFINE_KEYCODE(MUHENKAN),
    DEFINE_KEYCODE(HENKAN),
    DEFINE_KEYCODE(KATAKANA_HIRAGANA),
    DEFINE_KEYCODE(YEN),
    DEFINE_KEYCODE(RO),
    DEFINE_KEYCODE(KANA),
    DEFINE_KEYCODE(ASSIST),
    DEFINE_KEYCODE(BRIGHTNESS_DOWN),
    DEFINE_KEYCODE(BRIGHTNESS_UP),
    DEFINE_KEYCODE(MEDIA_AUDIO_TRACK),
    DEFINE_KEYCODE(SLEEP),
    DEFINE_KEYCODE(WAKEUP),
    DEFINE_KEYCODE(PAIRING),
    DEFINE_KEYCODE(MEDIA_TOP_MENU),
    DEFINE_KEYCODE(11),
    DEFINE_KEYCODE(12),
    DEFINE_KEYCODE(LAST_CHANNEL),
    DEFINE_KEYCODE(TV_DATA_SERVICE),
    DEFINE_KEYCODE(VOICE_ASSIST),
    DEFINE_KEYCODE(TV_RADIO_SERVICE),
    DEFINE_KEYCODE(TV_TELETEXT),
    DEFINE_KEYCODE(TV_NUMBER_ENTRY),
    DEFINE_KEYCODE(TV_TERRESTRIAL_ANALOG),
    DEFINE_KEYCODE(TV_TERRESTRIAL_DIGITAL),
    DEFINE_KEYCODE(TV_SATELLITE),
    DEFINE_KEYCODE(TV_SATELLITE_BS),
    DEFINE_KEYCODE(TV_SATELLITE_CS),
    DEFINE_KEYCODE(TV_SATELLITE_SERVICE),
    DEFINE_KEYCODE(TV_NETWORK),
    DEFINE_KEYCODE(TV_ANTENNA_CABLE),
    DEFINE_KEYCODE(TV_INPUT_HDMI_1),
    DEFINE_KEYCODE(TV_INPUT_HDMI_2),
    DEFINE_KEYCODE(TV_INPUT_HDMI_3),
    DEFINE_KEYCODE(TV_INPUT_HDMI_4),
    DEFINE_KEYCODE(TV_INPUT_COMPOSITE_1),
    DEFINE_KEYCODE(TV_INPUT_COMPOSITE_2),
    DEFINE_KEYCODE(TV_INPUT_COMPONENT_1),
    DEFINE_KEYCODE(TV_INPUT_COMPONENT_2),
    DEFINE_KEYCODE(TV_INPUT_VGA_1),
    DEFINE_KEYCODE(TV_AUDIO_DESCRIPTION),
    DEFINE_KEYCODE(TV_AUDIO_DESCRIPTION_MIX_UP),
    DEFINE_KEYCODE(TV_AUDIO_DESCRIPTION_MIX_DOWN),
    DEFINE_KEYCODE(TV_ZOOM_MODE),
    DEFINE_KEYCODE(TV_CONTENTS_MENU),
    DEFINE_KEYCODE(TV_MEDIA_CONTEXT_MENU),
    DEFINE_KEYCODE(TV_TIMER_PROGRAMMING),
    DEFINE_KEYCODE(HELP),
    // MStar Android Patch Begin
    DEFINE_KEYCODE(TV_SOUND_MODE),
    DEFINE_KEYCODE(TV_PICTURE_MODE),
    DEFINE_KEYCODE(TV_EPG),
    DEFINE_KEYCODE(TV_LIST),
    DEFINE_KEYCODE(TV_SUBTITLE),
    DEFINE_KEYCODE(TV_FAVORITE),
    DEFINE_KEYCODE(TV_MTS),
    DEFINE_KEYCODE(TV_FREEZE),
    DEFINE_KEYCODE(TV_CC),
    DEFINE_KEYCODE(TV_GINGA_BACK),
    DEFINE_KEYCODE(TV_BALANCE),
    DEFINE_KEYCODE(TV_INDEX),
    DEFINE_KEYCODE(TV_HOLD),
    DEFINE_KEYCODE(TV_UPDATE),
    DEFINE_KEYCODE(TV_REVEAL),
    DEFINE_KEYCODE(TV_SUBCODE),
    DEFINE_KEYCODE(TV_SIZE),
    DEFINE_KEYCODE(TV_CLOCK),
    DEFINE_KEYCODE(TV_SETTING),
    DEFINE_KEYCODE(SCREENSHOT),
    DEFINE_KEYCODE(NETFLIX),
    DEFINE_KEYCODE(AMAZON),
    // MStar Android Patch End
	
	// EosTek Patch Begin
    DEFINE_KEYCODE(MICECHO_UP),
    DEFINE_KEYCODE(MICVOL_UP),
    DEFINE_KEYCODE(MICVOL_DOWN),
    DEFINE_KEYCODE(MICECHO_DOWN),
    DEFINE_KEYCODE(DOUBLE_TV_0),
    DEFINE_KEYCODE(DOUBLE_TV_1),
    DEFINE_KEYCODE(DOUBLE_TV_2),
    DEFINE_KEYCODE(DOUBLE_TV_3),
    DEFINE_KEYCODE(DOUBLE_TV_4),
    DEFINE_KEYCODE(DOUBLE_TV_5),
    DEFINE_KEYCODE(DOUBLE_TV_6),
    DEFINE_KEYCODE(DOUBLE_TV_7),
    DEFINE_KEYCODE(DOUBLE_TV_8),
    DEFINE_KEYCODE(DOUBLE_TV_9),
    DEFINE_KEYCODE(DOUBLE_TV_POWER),
    DEFINE_KEYCODE(DOUBLE_TV_HOME),
    DEFINE_KEYCODE(DOUBLE_TV_INFO),
    DEFINE_KEYCODE(DOUBLE_TV_DPAD_UP),
    DEFINE_KEYCODE(DOUBLE_TV_DPAD_DOWN),
    DEFINE_KEYCODE(DOUBLE_TV_DPAD_LEFT),
    DEFINE_KEYCODE(DOUBLE_TV_DPAD_RIGHT),
    DEFINE_KEYCODE(DOUBLE_TV_ENTER),
    DEFINE_KEYCODE(DOUBLE_TV_CHANNEL_UP),
    DEFINE_KEYCODE(DOUBLE_TV_CHANNEL_DOWN),
    DEFINE_KEYCODE(DOUBLE_TV_VOLUME_UP),
    DEFINE_KEYCODE(DOUBLE_TV_VOLUME_DOWN),
    DEFINE_KEYCODE(DOUBLE_TV_BACK),
    DEFINE_KEYCODE(DOUBLE_TV_GUIDE),
    DEFINE_KEYCODE(DOUBLE_TV_CHANNEL_RETURN),
	// EosTek Patch End
    	//ChangHong IR extend ----
    DEFINE_KEYCODE(MSTAR_POWER),
    DEFINE_KEYCODE(MSTAR_EXIT),
    DEFINE_KEYCODE(MSTAR_MENU),
    DEFINE_KEYCODE(MSTAR_SOURCE),
    DEFINE_KEYCODE(MSTAR_INFO),
    DEFINE_KEYCODE(MSTAR_MODE),
    DEFINE_KEYCODE(MSTAR_INITIAL),
    DEFINE_KEYCODE(MSTAR_BURN_MODE),
    DEFINE_KEYCODE(MSTAR_DEFAULT_RESET),
    DEFINE_KEYCODE(MSTAR_S_MODE),
    DEFINE_KEYCODE(MSTAR_NUMB_1),
    DEFINE_KEYCODE(MSTAR_NUMB_2),
    DEFINE_KEYCODE(MSTAR_NUMB_3),
    DEFINE_KEYCODE(MSTAR_NUMB_4),
    DEFINE_KEYCODE(MSTAR_NUMB_5),
    DEFINE_KEYCODE(MSTAR_NUMB_6),
    DEFINE_KEYCODE(MSTAR_NUMB_7),
    DEFINE_KEYCODE(MSTAR_NUMB_8),
    DEFINE_KEYCODE(MSTAR_NUMB_9),
    DEFINE_KEYCODE(MSTAR_NUMB_0),
    DEFINE_KEYCODE(MSTAR_CH_PLUS),
    DEFINE_KEYCODE(MSTAR_CH_MINUS),
    DEFINE_KEYCODE(MSTAR_FIFTEEN_PLUS),
    DEFINE_KEYCODE(MSTAR_FIFTEEN_MINUS),
    DEFINE_KEYCODE(MSTAR_UP),
    DEFINE_KEYCODE(MSTAR_DOWN),
    DEFINE_KEYCODE(MSTAR_LEFT),
    DEFINE_KEYCODE(MSTAR_RIGHT),
    DEFINE_KEYCODE(MSTAR_SELECT),
    DEFINE_KEYCODE(MSTAR_DTV_SEARCH),
    DEFINE_KEYCODE(MSTAR_SWITCH_ATV),
    DEFINE_KEYCODE(MSTAR_SWITCH_DTV),
    DEFINE_KEYCODE(MSTAR_SWITCH_AV),
    DEFINE_KEYCODE(MSTAR_SWITCH_YPBPR),
    DEFINE_KEYCODE(MSTAR_SWITCH_VGA),
    DEFINE_KEYCODE(MSTAR_SWITCH_USB),
    DEFINE_KEYCODE(MSTAR_SWITCH_DVD),
    DEFINE_KEYCODE(MSTAR_SWITCH_HDMI),
    DEFINE_KEYCODE(MSTAR_SWITCH_HDMI1),
    DEFINE_KEYCODE(MSTAR_SWITCH_HDMI2),
    DEFINE_KEYCODE(MSTAR_SWITCH_HDMI3),
    DEFINE_KEYCODE(MSTAR_3D),
    DEFINE_KEYCODE(MSTAR_NET),
    DEFINE_KEYCODE(MSTAR_MONO),
    DEFINE_KEYCODE(MSTAR_DATA_DISPLAY),
    DEFINE_KEYCODE(MSTAR_ADC),
    DEFINE_KEYCODE(MSTAR_NICAM),
    DEFINE_KEYCODE(MSTAR_VERSION),
    DEFINE_KEYCODE(MSTAR_OSD_LANGUAGE),
    DEFINE_KEYCODE(MSTAR_HOME),
    DEFINE_KEYCODE(MSTAR_APP),
    DEFINE_KEYCODE(MSTAR_WHITE_BALANCE),
    DEFINE_KEYCODE(MSTAR_WIFI),
    DEFINE_KEYCODE(MSTAR_CEC),
    DEFINE_KEYCODE(MSTAR_F1),
    DEFINE_KEYCODE(MSTAR_F2),
    DEFINE_KEYCODE(MSTAR_F3),
    DEFINE_KEYCODE(MSTAR_F4),
	 //----ChangHong IR end------
	 //--Skyworth IR-Start-
	  DEFINE_KEYCODE(MSTAR_VHF_L),
	  DEFINE_KEYCODE(MSTAR_VHF_H), 
	  DEFINE_KEYCODE(MSTAR_UHF),
	  DEFINE_KEYCODE(MSTAR_MAC),
	  DEFINE_KEYCODE(MSTAR_IIC),
	  DEFINE_KEYCODE(MSTAR_FACTORY_MODE),
	  DEFINE_KEYCODE(MSTAR_FREQUENT_PRE),   
	  DEFINE_KEYCODE(MSTAR_GINGA), 
	  DEFINE_KEYCODE(MSTAR_NUMB_PLUS), 
	 //--Skyworth IR-End -
    { NULL, 0 }
};

static const InputEventLabel AXES[] = {
    DEFINE_AXIS(X),
    DEFINE_AXIS(Y),
    DEFINE_AXIS(PRESSURE),
    DEFINE_AXIS(SIZE),
    DEFINE_AXIS(TOUCH_MAJOR),
    DEFINE_AXIS(TOUCH_MINOR),
    DEFINE_AXIS(TOOL_MAJOR),
    DEFINE_AXIS(TOOL_MINOR),
    DEFINE_AXIS(ORIENTATION),
    DEFINE_AXIS(VSCROLL),
    DEFINE_AXIS(HSCROLL),
    DEFINE_AXIS(Z),
    DEFINE_AXIS(RX),
    DEFINE_AXIS(RY),
    DEFINE_AXIS(RZ),
    DEFINE_AXIS(HAT_X),
    DEFINE_AXIS(HAT_Y),
    DEFINE_AXIS(LTRIGGER),
    DEFINE_AXIS(RTRIGGER),
    DEFINE_AXIS(THROTTLE),
    DEFINE_AXIS(RUDDER),
    DEFINE_AXIS(WHEEL),
    DEFINE_AXIS(GAS),
    DEFINE_AXIS(BRAKE),
    DEFINE_AXIS(DISTANCE),
    DEFINE_AXIS(TILT),
    DEFINE_AXIS(GENERIC_1),
    DEFINE_AXIS(GENERIC_2),
    DEFINE_AXIS(GENERIC_3),
    DEFINE_AXIS(GENERIC_4),
    DEFINE_AXIS(GENERIC_5),
    DEFINE_AXIS(GENERIC_6),
    DEFINE_AXIS(GENERIC_7),
    DEFINE_AXIS(GENERIC_8),
    DEFINE_AXIS(GENERIC_9),
    DEFINE_AXIS(GENERIC_10),
    DEFINE_AXIS(GENERIC_11),
    DEFINE_AXIS(GENERIC_12),
    DEFINE_AXIS(GENERIC_13),
    DEFINE_AXIS(GENERIC_14),
    DEFINE_AXIS(GENERIC_15),
    DEFINE_AXIS(GENERIC_16),

    // NOTE: If you add a new axis here you must also add it to several other files.
    //       Refer to frameworks/base/core/java/android/view/MotionEvent.java for the full list.
    { NULL, 0 }
};

static const InputEventLabel LEDS[] = {
    DEFINE_LED(NUM_LOCK),
    DEFINE_LED(CAPS_LOCK),
    DEFINE_LED(SCROLL_LOCK),
    DEFINE_LED(COMPOSE),
    DEFINE_LED(KANA),
    DEFINE_LED(SLEEP),
    DEFINE_LED(SUSPEND),
    DEFINE_LED(MUTE),
    DEFINE_LED(MISC),
    DEFINE_LED(MAIL),
    DEFINE_LED(CHARGING),
    DEFINE_LED(CONTROLLER_1),
    DEFINE_LED(CONTROLLER_2),
    DEFINE_LED(CONTROLLER_3),
    DEFINE_LED(CONTROLLER_4),

    // NOTE: If you add new LEDs here, you must also add them to Input.h
    { NULL, 0 }
};

static const InputEventLabel FLAGS[] = {
    DEFINE_FLAG(VIRTUAL),
    DEFINE_FLAG(FUNCTION),

    { NULL, 0 }
};

static int lookupValueByLabel(const char* literal, const InputEventLabel *list) {
    while (list->literal) {
        if (strcmp(literal, list->literal) == 0) {
            return list->value;
        }
        list++;
    }
    return list->value;
}

static const char* lookupLabelByValue(int value, const InputEventLabel* list) {
    while (list->literal) {
        if (list->value == value) {
            return list->literal;
        }
        list++;
    }
    return NULL;
}

static int32_t getKeyCodeByLabel(const char* label) {
    return int32_t(lookupValueByLabel(label, KEYCODES));
}

static const char* getLabelByKeyCode(int32_t keyCode) {
    if (keyCode >= 0 && keyCode < size(KEYCODES)) {
        return KEYCODES[keyCode].literal;
    }
    return NULL;
}

static uint32_t getKeyFlagByLabel(const char* label) {
    return uint32_t(lookupValueByLabel(label, FLAGS));
}

static int32_t getAxisByLabel(const char* label) {
    return int32_t(lookupValueByLabel(label, AXES));
}

static const char* getAxisLabel(int32_t axisId) {
    return lookupLabelByValue(axisId, AXES);
}

static int32_t getLedByLabel(const char* label) {
    return int32_t(lookupValueByLabel(label, LEDS));
}


} // namespace android
#endif // _LIBINPUT_INPUT_EVENT_LABELS_H