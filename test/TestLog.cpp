#include <iostream>
#include "../include/Log/Log.h"

void terminate() {
    std::cout << "Press Enter to Terminate" << std::endl;
    std::cin.get();
}

int main() {
    const char* msg = "Hello";
    Log::setLogLevel(Log::Notification);
    Log::write("Hello", Log::Trace);
    terminate();
}