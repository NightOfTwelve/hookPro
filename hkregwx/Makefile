THEOS_DEVICE_IP = localhost
THEOS_DEVICE_PORT = 2222
THEOS_USER = root
ARCHS = armv7 armv7s arm64
TARGET = iphone:latest:7.0

;FINALPACKAGE = 1

include /opt/theos/makefiles/common.mk

TWEAK_NAME = hkwxreg
hkwxreg_FILES = Tweak.xm
hkwxreg_CFLAGS += -Wno-error
hkwxreg_CFLAGS += -I./curl
hkwxreg_LDFLAGS += -lz
hkwxreg_OBJ_FILES += libcurl.a

hkwxreg_FRAMEWORKS= UIKit Foundation
include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 WeChat"