#include <iostream>
#include "logger.hpp"

using namespace std;

mutex Logger::m;

int Logger::counter = 0;
Logger *Logger::loggerInstance = NULL;

Logger::Logger() {
    counter++;
    cout << "New instance (" << counter << ") of Logger created!!!\n";
}

Logger* Logger::getLogger() {
    // Double checking here
    if (loggerInstance == NULL) {
        m.lock();
        if (loggerInstance == NULL) {
            loggerInstance = new Logger();
        }
        m.unlock();
    }
    
    return loggerInstance;
}

void Logger::Log(string msg) {
    cout << msg << endl;
}