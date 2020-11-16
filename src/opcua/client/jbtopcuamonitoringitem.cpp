#include "jbtopcuamonitoringitem.h"

QT_BEGIN_NAMESPACE

class JBTOpcUaMonitoringItemData : public QSharedData
{
public:
    QString nodeId;
    QOpcUaMonitoringParameters settings;
    QOpcUa::NodeAttributes attributes {QOpcUa::NodeAttribute::Value};
};

JBTOpcUaMonitoringItem::JBTOpcUaMonitoringItem()
    : data(new JBTOpcUaMonitoringItemData)
{
}

JBTOpcUaMonitoringItem::JBTOpcUaMonitoringItem(const JBTOpcUaMonitoringItem &other)
    : data(other.data)
{
}

JBTOpcUaMonitoringItem::JBTOpcUaMonitoringItem(const QString &nodeId, 
                                               const QOpcUaMonitoringParameters &settings,
                                               QOpcUa::NodeAttributes attributes)
    : data(new JBTOpcUaMonitoringItemData)
{
    setNodeId(nodeId);
    setSettings(settings);
    setAttributes(attributes);
}

JBTOpcUaMonitoringItem &JBTOpcUaMonitoringItem::operator=(const JBTOpcUaMonitoringItem &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

JBTOpcUaMonitoringItem::~JBTOpcUaMonitoringItem()
{
}

QString JBTOpcUaMonitoringItem::nodeId() const
{
    return data->nodeId;
}

void JBTOpcUaMonitoringItem::setNodeId(const QString &nodeId)
{
    data->nodeId = nodeId;
}

QOpcUaMonitoringParameters JBTOpcUaMonitoringItem::settings() const
{
    return data->settings;
}

void JBTOpcUaMonitoringItem::setSettings(const QOpcUaMonitoringParameters &settings)
{
    data->settings = settings;
}

QOpcUa::NodeAttributes JBTOpcUaMonitoringItem::attributes() const
{
    return data->attributes;
}

void JBTOpcUaMonitoringItem::setAttributes(QOpcUa::NodeAttributes attributes)
{
    data->attributes = attributes;
}

QT_END_NAMESPACE
