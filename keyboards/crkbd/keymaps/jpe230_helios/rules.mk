# Shared rules for both of my Corne
OLED_ENABLE       = yes
RGB_MATRIX_ENABLE = no
RGBLIGHT_ENABLE   = no
CONSOLE_ENABLE    = yes
OLED_DRIVER       = ssd1306
VIA_ENABLE        = yes
WPM_ENABLE        = yes
CONVERT_TO        = helios
# DEBUG_MATRIX_SCAN_RATE_ENABLE = yes

SRC +=  oled/oled_handler.c process_record.c \
        oled/master/oled_master_handler.c \
        oled/slave/oled_slave_handler.c

S_LOCATION = ${SLOCATION}
ifneq ("$(wildcard $(S_LOCATION)/supersecrets.c)","")
    SRC +=  $(S_LOCATION)/supersecrets.c
endif