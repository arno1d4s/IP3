#include <iostream>
#include <cassert>
#include <sstream>


/*
    MobileDataConnection – klasės aprašymas
    ----------------------------------------
    - Ši klasė turės funkcijas:
        1. void connect() – Prisijungia prie mobiliojo interneto.
        2. void disconnect() – Atsijungia nuo mobiliojo interneto.
        3. int getSpeed() – Grąžina prisijungimo greitį (Mbps).
        4. int getSignalStrength() – Grąžina signalo stiprumą (%).
        5. std::string getNetworkType() – Grąžina tinklo tipą ("4G" arba "5G").

    - Klasė bus naudojama polimorfiškai per bazinę `ConnectionMethod` klasę.
*/

void testConnect(MobileDataConnection& connection)
{   
    std::cout << "Testing connection: ";
    std::stringstream buffer;
    std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());

    connection.connect();
    std::cout.rdbuf(old);

    assert(buffer.str() == "Connected to internet via Mobile Data!\n");
    std::cout << "PASSED" << std::endl;
}

void testDisconnect(MobileDataConnection& connection)
{
    std::cout << "Testing disconnection: ";
    std::stringstream buffer;
    std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());

    connection.disconnect();
    std::cout.rdbuf(old);

    assert(buffer.str() == "Disconnected from internet via Mobile Data!\n");
    std::cout << "PASSED" << std::endl;
}

void testSpeed(MobileDataConnection& connection)
{
    int speed = connection.getSpeed();
    std::cout << "Testing connection speed: " << speed << " Mbps ";
    assert(speed > 15 && speed <= 150);
    std::cout << "PASSED" << std::endl;
}

void testSignalStrength(MobileDataConnection& connection)
{
    int signal = connection.getSignalStrength();
    std::cout << "Testing signal strength: " << signal << "% ";
    assert(signal >= 0 && signal <= 90);
    std::cout << "PASSED" << std::endl;
}

void testNetworkType(MobileDataConnection& connection)
{
    std::string type = connection.getNetworkType();
    std::cout << "Testing network type: " << type << " ";
    assert(type == "4G" || type == "5G");
    std::cout << "PASSED" << std::endl;
}

int main() {
    MobileDataConnection mobile;

    testConnect(mobile);
    testSpeed(mobile);
    testSignalStrength(mobile);
    testNetworkType(mobile);
    testDisconnect(mobile);

    std::cout << "All tests passed!\n";
    return 0;
}
