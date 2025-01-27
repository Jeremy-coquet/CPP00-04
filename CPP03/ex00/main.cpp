#include "ClapTrap.hpp"

int main () {
    ClapTrap claptrap1("john");
	ClapTrap claptrap2("smith");

    // Test des méthodes
    claptrap1.attack("target1");
	claptrap1.attack("target1");
	claptrap1.attack("target1");
	claptrap1.attack("target1");
	claptrap1.attack("target1");
	claptrap1.attack("target1");
	claptrap1.attack("target1");
	claptrap1.attack("target1");
	claptrap1.attack("target1");
	claptrap1.attack("target1");
	std::cout << std::endl;

    // claptrap2.takeDamage(5);
    // claptrap2.takeDamage(10);
	// std::cout << std::endl;

	claptrap1.attack("target1");
	std::cout << std::endl;
	std::cout << std::endl;
	

    claptrap1.beRepaired(3);
	std::cout << std::endl;

    claptrap1.attack("target2");
	std::cout << std::endl;

	claptrap2.takeDamage(10);
    claptrap2.beRepaired(5);

    return 0;
}