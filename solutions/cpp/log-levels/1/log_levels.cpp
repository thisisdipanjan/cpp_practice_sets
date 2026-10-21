#include <string>
#include <algorithm>

namespace log_line {
std::string message(std::string line) {
    int index = {};
    index = line.find(":");
    std::string message = line.substr(index+2);
    return message;
}

std::string log_level(std::string line) { 
    int index = {};
    std::string message_upper = {};
    index = line.find(":");
    std::string message = line.substr(1, index-2);
    for (size_t i=0; i<=message.size()-1; i++){
        message_upper += std::toupper(message[i]);
    }
    return message_upper;
}

std::string reformat(std::string line) {
    std::string message_ = message(line);
    std::string log_level_ = log_level(line);
    return message_ + " " + "(" + log_level_ + ")";
    }
}
