#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main() {
	ClapTrap ClapTrap("clap");
	std::cout << std::endl;

	ScavTrap ScavTrap("Scav");
	std::cout << std::endl;

	FragTrap FragTrap("Frag");
	std::cout << std::endl;

	DiamondTrap DiamondTrap("Deamon");
	std::cout << std::endl << std::endl;



	DiamondTrap.whoAmI();
	std::cout << std::endl;

	DiamondTrap.attack("target"); //display 49 pts of energy after that

	std::cout << std::endl;

	ClapTrap.displayCt(ClapTrap);
	std::cout << std::endl;
	FragTrap.displayFt(FragTrap);
	std::cout << std::endl;
	ScavTrap.displaySt(ScavTrap);
	std::cout << std::endl;
	DiamondTrap.displayDt(DiamondTrap);
	std::cout << std::endl;

	return 0;
}