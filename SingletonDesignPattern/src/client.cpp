// Creational Design Pattern
// We'll create a single instance, one object, of the class
// Need to make sure that there are no other instances of the class created
// There sometimes may be things that you don't need more than one object for, eg. a logger for all the modules
// We don't want the users to create objects of the singleton classes, we need to restrict them
// from creating the objects. -> Make the constructor private

#include <iostream>
#include <thread>
#include "logger.hpp"
using namespace std;

void LogMessage(string user) {
    Logger *logger = Logger::getLogger();
    logger->Log("This message is for " + user);
}

int main()
{
    std::thread t1(LogMessage, "user1");
    std::thread t2(LogMessage, "user2");
    std::thread t3(LogMessage, "user3");

    t1.join();
    t2.join();
    t3.join();

    return 0;
}