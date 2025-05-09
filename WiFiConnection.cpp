#include <iostream>
#include <cstdlib>
#include "WiFiConnection.h"

void WiFiConnection::connect()
{
    std::cout << "Connected to internet via WiFi!" << std::endl;
}

void WiFiConnection::disconnect()
{
    std::cout << "Disconnected from internet via WiFi!\n" << std::endl;
}

int WiFiConnection::getSpeed()
{
    return rand() % 100 + 15;
}

int WiFiConnection::getSignalStrength()
{
    return rand() % 100 + 1;
}
