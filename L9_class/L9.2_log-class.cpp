#include <iostream>

class Log {
    public:
        enum LogLevel {
            INFO,
            WARNING,
            ERROR
        };
    
    private:

        LogLevel current_level = LogLevel::INFO;

    public:
        
        void set_log_level(LogLevel level) {
            current_level = level;
        }

        void log_message(LogLevel level, const std::string& message) {
            if (level >= current_level) {
                std::cout << message << std::endl;
            }
        }
};


int main() {

    Log log;
    log.set_log_level(Log::LogLevel::WARNING);

    log.log_message(Log::LogLevel::INFO, "This is an info message");
    log.log_message(Log::LogLevel::WARNING, "This is a warning message");
    log.log_message(Log::LogLevel::ERROR, "This is an error message");



    return 0;



}