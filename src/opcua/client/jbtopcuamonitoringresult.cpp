#include "jbtopcuamonitoringresult.h"

QT_BEGIN_NAMESPACE

class JBTOpcUaMonitoringResultData : public QSharedData
{
public:
    QString nodeId;
    QMap<QOpcUa::NodeAttribute, QOpcUa::UaStatusCode> monitoringResults;
    QOpcUaMonitoringParameters monitoringParametersResult;
};

JBTOpcUaMonitoringResult::JBTOpcUaMonitoringResult()
    : data(new JBTOpcUaMonitoringResultData)
{
}

JBTOpcUaMonitoringResult::JBTOpcUaMonitoringResult(const JBTOpcUaMonitoringResult &other)
    : data(other.data)
{
}

JBTOpcUaMonitoringResult::JBTOpcUaMonitoringResult(const QString &nodeId,
                                                   const QMap<QOpcUa::NodeAttribute, QOpcUa::UaStatusCode> &monitoringResults, 
                                                   const QOpcUaMonitoringParameters& monitoringParametersResult
                                                  )
    : data(new JBTOpcUaMonitoringResultData)
{
    setNodeId(nodeId);
    setMonitoringResults(monitoringResults);
    setMonitoringParametersResult(monitoringParametersResult);
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

QMap<QOpcUa::NodeAttribute, QOpcUa::UaStatusCode> JBTOpcUaMonitoringResult::monitoringResults() const
{
    return data->monitoringResults;
}

void JBTOpcUaMonitoringResult::setMonitoringResults(const QMap<QOpcUa::NodeAttribute, QOpcUa::UaStatusCode> &monitoringResults)
{
    data->monitoringResults = monitoringResults;
}

QOpcUaMonitoringParameters JBTOpcUaMonitoringResult::monitoringParametersResult() const
{
    return data->monitoringParametersResult;
}

void JBTOpcUaMonitoringResult::setMonitoringParametersResult(const QOpcUaMonitoringParameters& monitoringParametersResult)
{
    data->monitoringParametersResult = monitoringParametersResult;
}

QT_END_NAMESPACE
