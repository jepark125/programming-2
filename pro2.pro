QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    course3.cpp \
    main.cpp \
    pro2.cpp \
    secdialog.cpp \
    secdialog2.cpp

HEADERS += \
    course3.h \
    pro2.h \
    secdialog.h \
    secdialog2.h

FORMS += \
    course3.ui \
    pro2.ui \
    secdialog.ui \
    secdialog2.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
