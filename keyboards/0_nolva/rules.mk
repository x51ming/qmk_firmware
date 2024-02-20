MCU = atmega32u4
BOOTLOADER = atmel-dfu
BOOTMAGIC_ENABLE = yes     # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no		# Mouse keys
EXTRAKEY_ENABLE = yes		# Audio control and System control
CONSOLE_ENABLE = yes		# Console for debug
COMMAND_ENABLE = yes		# LSFT+RSFT+cmd
SLEEP_LED_ENABLE = yes		# Breathing sleep LED during USB suspend
NKRO_ENABLE = yes			# USB Nkey Rollover
AUDIO_ENABLE = no
BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = yes
RGB_MATRIX_ENABLE = no
# EEPROM_DRIVER = transient
# RGB_MATRIX_DRIVER = WS2812
# leader key timeout is too long
LEADER_ENABLE = no
KEY_LOCK_ENABLE = yes