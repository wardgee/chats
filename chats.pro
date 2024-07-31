QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adduserr.cpp \
    chatslist.cpp \
    connectdatabases.cpp \
    deleteuser.cpp \
    login.cpp \
    main.cpp \
    register.cpp \
    widget.cpp

HEADERS += \
    adduserr.h \
    chatslist.h \
    connectdatabases.h \
    deleteuser.h \
    login.h \
    register.h \
    widget.h

FORMS += \
    adduserr.ui \
    chatslist.ui \
    deleteuser.ui \
    login.ui \
    register.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
