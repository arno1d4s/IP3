#include <iostream>
#include "NetworkManager.h"

void NetworkManager::setConnectionMethod(ConnectionMethod* method)
{
    connectionMethod = method;
}

void NetworkManager::connect()
{
    if(connectionMethod)
    {
        connectionMethod->connect();
        std::cout << "Connection speed: " << connectionMethod->getSpeed() << " Mbps" << std::endl;
    }
    else
    {
        std::cout << "Connection method not chosen!" << std::endl;
    }
            
}

void NetworkManager::disconnect()
{
    if(connectionMethod)
    {
        connectionMethod->disconnect();
    }
    else
    {
        std::cout << "Connection method not chosen!" << std::endl;
    }
    
}

void NetworkManager::checkSignal()
{
    if(connectionMethod)
    {
        std::cout << "Signal strenght: " << connectionMethod->getSignalStrenght() << "%" <<std::endl;
    }
    else
    {
        std::cout << "Connection method not chosen!" << std::endl;
    }
}