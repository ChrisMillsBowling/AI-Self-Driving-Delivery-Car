QT += dbus widgets

DBUS_ADAPTORS += car.xml
HEADERS += car.h \
    ../controller/inputwidget.h \
    cbox.h \
    testdataform.h
SOURCES += car.cpp main.cpp \
    cbox.cpp \
    testdataform.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/dbus/remotecontrolledcar/car
INSTALLS += target

FORMS += \
    DataControl.ui \
    testdataform.ui
