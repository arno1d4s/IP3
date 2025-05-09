#include <iostream>
#include <cstdlib>
#include "EthernetConnection.h"

void EthernetConnection::connect()
{
    std::cout << "Connected to internet via Ethernet!" << std::endl;
}

void EthernetConnection::disconnect()
{
    std::cout << "Disconnected from internet via WiFi!\n" << std::endl;
}

int EthernetConnection::getSpeed()
{
    return rand() % 800 + 100;
}

int EthernetConnection::getSignalStrength()
{
    return 100;
}
