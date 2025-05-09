#include <iostream>
#include <cstdlib>
#include "WiFiConnection.h"

void WiFiConnection::connect()
{
    std::cout << "Connecting to internet via WiFi...\n" << std::endl;
}

void WiFiConnection::disconnect()
{
    std::cout << "Disconnecting WiFi...\n" << std::endl;
}

int WiFiConnection::getSpeed()
{
    return rand() % 100 + 15;
}

int WiFiConnection::getSignalStrength()
{
    return rand() % 100 + 1;
}
