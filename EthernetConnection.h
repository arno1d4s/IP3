#ifndef ETHERNET_CONNECTION_H
#define ETHERNET_CONNECTION_H

#include "ConnectionMethod.h"

class EthernetConnection : public ConnectionMethod
{
    public:
        void connect();
        void disconnect();
        int getSpeed();
        int getSignalStrength();
};

#endif