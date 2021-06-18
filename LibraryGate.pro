QT += widgets

HEADERS += \
    Gatewin.h \
    slideredit.h

SOURCES += \
        Gatewin.cpp \
        main.cpp \
        slideredit.cpp

TRANSLATIONS += \
    LibraryGate_zh_CN.ts

target.path = /tmp/$${TARGET}/bin
INSTALLS += target



