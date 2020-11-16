#include "jbtopcuamonitoringresult.h"

QT_BEGIN_NAMESPACE

class JBTOpcUaMonitoringResultData : public QSharedData
{
public:
    QString nodeId;
    QMap<QOpcUa::NodeAttribute, QOpcUa::UaStatusCode> monitorResults;
};

JBTOpcUaMonitoringResult::JBTOpcUaMonitoringResult()
    : data(new JBTOpcUaMonitoringResultData)
{
}

JBTOpcUaMonitoringResult::JBTOpcUaMonitoringResult(const JBTOpcUaMonitoringResult &other)
    : data(other.data)
{
}

JBTOpcUaMonitoringResult::JBTOpcUaMonitoringResult(const QString &nodeId, const QMap<QOpcUa::NodeAttribute, QOpcUa::UaStatusCode> &monitorResults)
    : data(new JBTOpcUaMonitoringResultData)
{
    setNodeId(nodeId);
    setMonitorResults(monitorResults);
}

JBTOpcUaMonitoringResult &JBTOpcUaMonitoringResult::operator=(const JBTOpcUaMonitoringResult &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

JBTOpcUaMonitoringResult::~JBTOpcUaMonitoringResult()
{
}

QString JBTOpcUaMonitoringResult::nodeId() const
{
    return data->nodeId;
}

void JBTOpcUaMonitoringResult::setNodeId(const QString &nodeId)
{
    data->nodeId = nodeId;
}

QMap<QOpcUa::NodeAttribute, QOpcUa::UaStatusCode> JBTOpcUaMonitoringResult::monitorResults() const
{
    return data->monitorResults;
}

void JBTOpcUaMonitoringResult::setMonitorResults(const QMap<QOpcUa::NodeAttribute, QOpcUa::UaStatusCode> &monitorResults)
{
    data->monitorResults = monitorResults;
}

QT_END_NAMESPACE
