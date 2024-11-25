#pragma once

enum LogLevel {
    INFO,
    WARNING,
    ERROR
};

class Logger {
    private: 
        LogLevel logLevel = INFO;

    public:
        Logger(LogLevel level);
        void info(const char* message);
        void warning(const char* message);
        void error(const char* message);
};