#ifndef JBTOPCUAMONITORINGITEM_H
#define JBTOPCUAMONITORINGITEM_H

#include <QtOpcUa/qopcuatype.h>
#include <QtOpcUa/qopcuamonitoringparameters.h>
#include <QtCore/qshareddata.h>

QT_BEGIN_NAMESPACE

class JBTOpcUaMonitoringItemData;

class Q_OPCUA_EXPORT JBTOpcUaMonitoringItem
{
public:
    JBTOpcUaMonitoringItem();
    JBTOpcUaMonitoringItem(const JBTOpcUaMonitoringItem &other);
    JBTOpcUaMonitoringItem(const QString &nodeId, const QOpcUaMonitoringParameters &settings, QOpcUa::NodeAttributes attributes = QOpcUa::NodeAttribute::Value);
    JBTOpcUaMonitoringItem &operator=(const JBTOpcUaMonitoringItem &rhs);
    ~JBTOpcUaMonitoringItem();

    QString nodeId() const;
    void setNodeId(const QString &nodeId);

    QOpcUaMonitoringParameters settings() const;
    void setSettings(const QOpcUaMonitoringParameters &settings);

    QOpcUa::NodeAttributes attributes() const;
    void setAttributes(QOpcUa::NodeAttributes attributes);

private:
    QSharedDataPointer<JBTOpcUaMonitoringItemData> data;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(JBTOpcUaMonitoringItem)

#endif // JBTOPCUAMONITORINGITEM_H