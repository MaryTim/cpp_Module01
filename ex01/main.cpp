#include "Zombie.hpp"

int main() {

    int n = 5;

    Zombie *myHorde = zombieHorde(n, "Julka");

    if (myHorde) {
        for (int i = 0; i < n; i++) {
            myHorde[i].announce();
        }
    }

    delete[] myHorde;

    return 0;
}