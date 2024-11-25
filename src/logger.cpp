#include <iostream>
#include "logger.hpp"

Logger::Logger(LogLevel level) : logLevel(level) {};

void Logger::info(const char* message) {
    if (logLevel == WARNING || logLevel == ERROR) return;
    std::cout << "[INFO] " << message << "\n";
};

void Logger::warning(const char* message) {
    if (logLevel == ERROR) return;
    std::cout << "[WARNING] " << message << "\n";
};

void Logger::error(const char* message) {
    std::cout << "[ERROR] " << message << "\n";
};