#include "Harl.hpp"

Harl::Harl() { }

Harl::~Harl() { }

void Harl::debug() {
    std::cout << "DEBUG. I love having extra bacon for my\n7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void Harl::info() {
    std::cout << "INFO. I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void Harl::warning() {
    std::cout << "WARNING. I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error() {
    std::cout << "ERROR. This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level) {
    void (Harl::*complaints[])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            (this->*complaints[i])();
            return;
        }
    }
    std::cout << "UNKNOWN. Unknown complaint level.\n" << std::endl;
}