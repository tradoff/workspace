#-------------------------------------------------
#
# Project created by QtCreator 2017-07-28T07:40:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CalculationPractice
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    answer.cpp \
    calculatecontroller.cpp

HEADERS  += mainwindow.h \
    equation.h \
    answer.h \
    operate.h \
    operatefactory.h \
    calculatecontroller.h \
    qtcontrol.h

FORMS    += mainwindow.ui
