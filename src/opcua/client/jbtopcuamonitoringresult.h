#ifndef JBTOPCUAMONITORINGRESULT_H
#define JBTOPCUAMONITORINGRESULT_H

#include <QtOpcUa/qopcuatype.h>
#include <QtCore/qshareddata.h>

QT_BEGIN_NAMESPACE

class JBTOpcUaMonitoringResultData;

class Q_OPCUA_EXPORT JBTOpcUaMonitoringResult
{
public:
    JBTOpcUaMonitoringResult();
    JBTOpcUaMonitoringResult(const JBTOpcUaMonitoringResult &other);
    JBTOpcUaMonitoringResult(const QString &nodeId, const QMap<QOpcUa::NodeAttribute, QOpcUa::UaStatusCode> &monitorResults);
    JBTOpcUaMonitoringResult &operator=(const JBTOpcUaMonitoringResult &rhs);
    ~JBTOpcUaMonitoringResult();

    QString nodeId() const;
    void setNodeId(const QString &nodeId);

    QMap<QOpcUa::NodeAttribute, QOpcUa::UaStatusCode> monitorResults() const;
    void setMonitorResults(const QMap<QOpcUa::NodeAttribute, QOpcUa::UaStatusCode> &monitorResults);

private:
    QSharedDataPointer<JBTOpcUaMonitoringResultData> data;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(JBTOpcUaMonitoringResult)

#endif // JBTOPCUAMONITORINGRESULT_H