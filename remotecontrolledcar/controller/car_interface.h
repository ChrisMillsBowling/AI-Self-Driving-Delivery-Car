/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -p car_interface.h: car.xml
 *
 * qdbusxml2cpp is Copyright (C) 2019 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef CAR_INTERFACE_H
#define CAR_INTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.example.Examples.CarInterface
 */
class OrgExampleExamplesCarInterfaceInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.example.Examples.CarInterface"; }

public:
    OrgExampleExamplesCarInterfaceInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~OrgExampleExamplesCarInterfaceInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> accelerate()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("accelerate"), argumentList);
    }

    inline QDBusPendingReply<> decelerate()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("decelerate"), argumentList);
    }

    inline QDBusPendingReply<> turnLeft()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("turnLeft"), argumentList);
    }

    inline QDBusPendingReply<> turnRight()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("turnRight"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void crashed();
};

namespace org {
  namespace example {
    namespace Examples {
      typedef ::OrgExampleExamplesCarInterfaceInterface CarInterface;
    }
  }
}
#endif