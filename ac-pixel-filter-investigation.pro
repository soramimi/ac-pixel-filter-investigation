
TEMPLATE = app
TARGET = ac-pixel-filter-investigation
CONFIG += console c++14
QT += core gui widgets

DESTDIR = $$PWD/bin

SOURCES += \
	main.cpp \
	xbrz1.8/xbrz.cpp

HEADERS += \
	xbrz1.8/xbrz.h \
	xbrz1.8/xbrz_config.h \
	xbrz1.8/xbrz_tools.h
