/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef DEBOUNCE
#define DEBOUNCE 50
#define COMBO_TERM 100

#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"KYDDl/Z7j6J"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT
