#include "Zombie.hpp"

int main(int ac, char **av) {

    int nbZombies = 0;
    std::string name = "zombieDFT";
    if (ac == 1) {
        nbZombies = 10;
    }
    if (ac == 2) {
        nbZombies = atoi(av[1]);
    }
    if (ac == 3) {
        nbZombies = atoi(av[1]);
        name = av[2];
    }
    if (ac > 3)
        std::cout << "too many arguments" << std::endl;

    Zombie *horde;

    horde = zombieHorde(nbZombies, name);
    delete [] horde;
    return (0);
}