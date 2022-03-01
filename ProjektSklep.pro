QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    kurierpanel.cpp \
    magazynier.cpp \
    main.cpp \
    mainwindow.cpp \
    produkty.cpp \
    sklep.cpp \
    zmiana.cpp

HEADERS += \
    kurierpanel.h \
    magazynier.h \
    mainwindow.h \
    produkty.h \
    sklep.h \
    zmiana.h

FORMS += \
    kurierpanel.ui \
    magazynier.ui \
    mainwindow.ui \
    produkty.ui \
    sklep.ui \
    zmiana.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
QMAKE_CXXFLAGS += -std=gnu++11
RESOURCES += \
    obrazy.qrc \
    src.qrc \
    src.qrc
