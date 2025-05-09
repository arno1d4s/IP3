#ifndef NETWORK_MANAGER_H
#define NETWORK_MANAGER_H

#include "ConnectionMethod.h"

class NetworkManager
{
    private:
        ConnectionMethod* connectionMethod;

    public:
        void setConnectionMethod(ConnectionMethod* method);
        void connect();
        void disconnect();
        void checkSignal();
};

#endif