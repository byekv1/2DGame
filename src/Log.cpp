#include <iostream>
#include "../include/Log/Log.h"

Log::Level Log::logLevel = Log::Warning;

///
/// Getter
///

Log::Level Log::getLogLevel() {
    return logLevel;
}

///
/// Setter
///

void Log::setLogLevel(Log::Level logLevelIn) {
    logLevel = logLevelIn;
}

///
/// Functions
///

void Log::write(const char *message) {
    std::cout << message << std::endl;
}

void Log::write(const char *message, Log::Level logLevelTypeIn) {

    if (logLevelTypeIn <= logLevel) {

        const char *logLevelStr;

        switch(logLevelTypeIn) {

            case Log::Warning:
                logLevelStr = "[Warning]";
                break;
            case Log::Notification:
                logLevelStr = "[Notification]";
                break;
            default:
                logLevelStr = "[Trace]";
                break;

        }

        std::cout << logLevelStr << " " << message << std::endl;

    }

}

///
/// Constructor
///

Log::Log() {}

///
/// Deconstructor
///

Log::~Log(){}