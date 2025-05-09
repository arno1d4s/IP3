#include <iostream>
#include <cstdlib>
#include "EthernetConnection.h"

void EthernetConnection::connect()
{
    std::cout << "Connecting to internet via Ethernet...\n" << std::endl;
}

void EthernetConnection::disconnect()
{
    std::cout << "Disconnecting Ethernet...\n" << std::endl;
}

int EthernetConnection::getSpeed()
{
    return rand() % 800 + 100;
}

int EthernetConnection::getSignalStrenght()
{
    return 100;
}
