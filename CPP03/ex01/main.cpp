#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    // Test ClapTrap
    ClapTrap claptrap("johny_clap");
    claptrap.displayCt(claptrap);
    claptrap.attack("target1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.attack("target2");
    claptrap.takeDamage(10); //mortal dommage
    claptrap.takeDamage(10);
    claptrap.beRepaired(5);
    std::cout << std::endl;
    // claptrap.guardGate(); //to test

    // Test ScavTrap
    ScavTrap scavtrap("boby_scav");
    scavtrap.displaySt(scavtrap);
    scavtrap.attack("target3");
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();

    return 0;
}