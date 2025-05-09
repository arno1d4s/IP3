#ifndef WIFI_CONNECTION_H
#define WIFI_CONNECTION_H

#include "ConnectionMethod.h"

class WiFiConnection : public ConnectionMethod
{
    public:
        void connect();
        void disconnect();
        int getSpeed();
        int getSignalStrenght();
};

#endif