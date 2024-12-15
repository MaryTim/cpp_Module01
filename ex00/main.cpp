#include "Zombie.hpp"

void randomChump(std::string name);
Zombie *newZombie(std::string name);

int main() {
    // heap-allocated
	Zombie *myZombie = newZombie("Bella");
	myZombie->announce();
    delete myZombie;
    // stack-allocated 
	randomChump("Edward");
    return 0;
}