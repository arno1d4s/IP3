#include "WiFiConnection.h"
#include "EthernetConnection.h"
#include "NetworkManager.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
    srand(time(0));

    ConnectionMethod* connection;

    WiFiConnection wifi;
    EthernetConnection ethernet;

    connection = &wifi;
    connection->connect(); // polimorfizmas
    std::cout << "Connection speed: " << connection->getSpeed() << " Mbps" << std::endl; // polimorfizmas
    std::cout << "Signal strenght: " << connection->getSignalStrength() << "%" << std::endl; // polimorfizmas
    connection->disconnect(); // polimorfizmas

    connection = &ethernet;
    connection->connect(); // polimorfizmas
    std::cout << "Connection speed: " << connection->getSpeed() << " Mbps" << std::endl; // polimorfizmas
    std::cout << "Signal strenght: " << connection->getSignalStrength() << "%" << std::endl; // polimorfizmas
    connection->disconnect(); // polimorfizmas

    return 0;
}
