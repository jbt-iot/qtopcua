TARGET = tst_qopcuaclient

QT += testlib opcua network
QT -= gui
CONFIG += testcase

SOURCES += \
    tst_client.cpp
