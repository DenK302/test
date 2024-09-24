TEMPLATE = app
TARGET = MyQtApp
QT += widgets
INCLUDEPATH += $$PWD/forms
SOURCES += main.cpp
SOURCES += $$files($$PWD/forms/*.cpp, true)
HEADERS += $$files($$PWD/forms/*.h, true)