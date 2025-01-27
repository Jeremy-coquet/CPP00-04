
#include "Harl.hpp"

Harl::Harl() {
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";
}


Harl::~Harl()
{
}

void Harl::debug() {
    std::cout << DEBUG <<std::endl; 
}

void Harl::info() {
    std::cout << INFO << std::endl;
}

void Harl::warning() {
    std::cout << WARNING << std::endl;
}

void Harl::error() {
    std::cout << ERROR << std::endl;
}

void Harl::complain(std::string level) {
    void(Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            (this->*functions[i])();
            return ;
        }
    }
}