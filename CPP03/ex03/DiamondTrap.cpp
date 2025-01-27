#include "DiamondTrap.hpp"


//constructor
DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap()
{
	ClapTrap::_name = "default_clap_name";
	std::cout << "DiamondTrap " << this->_name << " created with default constructor." << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = name;
	std::cout << "DiamondTrap " << this->_name << " created." << std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	*this = copy;
	std::cout << "DiamondTrap Copy Constructor called " << std::endl;
}

//assignement
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	this->_name = other._name + "_clap_trap";
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return *this;
}

// Destructeur
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_name << " destroyed." << std::endl;
}

// Methodes
void DiamondTrap::attack(const std::string &target) {
		ScavTrap::attack(target);
	}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Hello i am a DiamondTrap named " << this->_name <<
	" and i am originated from the ClapTrap named " << ClapTrap::_name << "." <<
	std::endl;
}

void DiamondTrap::displayDt(const DiamondTrap& DiamondTrap) {
	std::cout << "I'm " << _name << ": check my skill" << std::endl;
	std::cout << "_name : " << this->_name << std::endl;
	std::cout << "_hitPoints : " << this->_name << " = " << DiamondTrap._hitPoints << std::endl;
	std::cout << "_energyPoints : " << this->_name << " = " << DiamondTrap._energyPoints << std::endl;
	std::cout << "_attackDamage : " << this->_name << " = " << DiamondTrap._attackDamage << std::endl;
}