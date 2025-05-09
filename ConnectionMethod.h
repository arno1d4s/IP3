#ifndef CONNECTION_METHOD_H
#define CONNECTION_METHOD_H

class ConnectionMethod
{
    public:
        virtual void connect() = 0;
        virtual void disconnect() = 0;
        virtual int getSpeed() = 0;
        virtual int getSignalStrenght() = 0;
        virtual ~ConnectionMethod() {}
};

#endif