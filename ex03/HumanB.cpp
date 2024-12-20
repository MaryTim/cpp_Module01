#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {
    std::cout << this->name << " has no weapon!" << std::endl;
}

HumanB::~HumanB() {
	std::cout << this->name << " is deinited!" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() {
	if (this->weapon != NULL) {
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    } else {
        std::cout << this->name << " has no weapon!" << std::endl;
    }
}