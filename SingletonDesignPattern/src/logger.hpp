#ifndef __LOGGER_HPP__
#define __LOGGER_HPP__

#include <string>
#include <mutex>
using namespace std;

class Logger {
    static int counter;
    static Logger *loggerInstance;
    static std::mutex m;
    Logger();
    Logger(const Logger&);
    Logger operator=(const Logger&);
public:
    static Logger* getLogger();
    void Log(string msg);
};

#endif