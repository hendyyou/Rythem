#ifndef CONNECTIONMONITORWSSERVER_H
#define CONNECTIONMONITORWSSERVER_H
#include "websocketserver.h"
#include "qiconnectiondata.h"

//this class is for monitoring proxy connection and forward changes of them via websocket to client(s)
class ConnectionMonitorWSServer : public WebSocketServer
{
	Q_OBJECT
public:
	explicit ConnectionMonitorWSServer(QObject *parent = 0);
	
signals:
	
public slots:
	void handleConnectionAdd(ConnectionData_ptr p);
	void handleConnectionUpdate(ConnectionData_ptr p);
	void handleConnectionRemove(ConnectionData_ptr p);
	
};

#endif // CONNECTIONMONITORWSSERVER_H
