#-------------------------------------------------
#
# Project created by QtCreator 2014-12-10T19:03:55
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = JChat
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    inetutils.cpp \
    settingdialog.cpp \
    constantes.cpp

HEADERS  += mainwindow.h \
    inetutils.h \
    settingdialog.h \
    constantes.h

FORMS    += mainwindow.ui \
    settingdialog.ui
