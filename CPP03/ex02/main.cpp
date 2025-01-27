#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    // Test ClapTrap;
    ClapTrap claptrap("johny_clap");
    std::cout << std::endl;
    claptrap.displayCt(claptrap);
    std::cout << std::endl;


    claptrap.attack("target1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.attack("target2");
    claptrap.takeDamage(10); //mortal dommage
    claptrap.takeDamage(10);
    claptrap.beRepaired(5);
    std::cout << std::endl;
    std::cout << std::endl;
    // claptrap.guardGate(); //to test, no guardGate to this object


    // Test ScavTrap
    ScavTrap scavtrap("boby_scav");
    std::cout << std::endl;
    scavtrap.displaySt(scavtrap);
    std::cout << std::endl;


    scavtrap.attack("target3");
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(10);
    std::cout << std::endl;

    scavtrap.guardGate();
    std::cout << std::endl;

    // test FragTrap
    FragTrap FragTrap("fanzy_Frag");
    FragTrap.displayFt(FragTrap);
    FragTrap.takeDamage(5);


    return 0;
}