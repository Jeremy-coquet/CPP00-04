#include "FragTrap.hpp"


//constructor
FragTrap::FragTrap()
{
	_hitPoints = 100;
	_attackDamage = 30;
	std::cout << GREEN "FragTrap from ClapTrap " << this->_name << " created with default constructor." RST << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << GREEN << "FragTrap " << this->_name << " created." << RST << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "FragTrap " << _name << " has been copied!" << std::endl;
}

//destructeur
FragTrap::~FragTrap() {
	std::cout << RED << _name << ": FragTrap destructor called" << RST << std::endl;
}

//assignement
FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	std::cout << "FragTrap " << _name << " has been assigned!" << std::endl;
	return *this;
}

//methodes
void FragTrap::attack(const std::string& target) {
	if (_hitPoints > 0 && _energyPoints > 0) {
		std::cout << _name << ": attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints -= 1;
	}
	else {
		std::cout << _name << " doesn't have enough energyPoints or is dead ! " << std::endl;
	}
}

void FragTrap::highFivesGuys(void) {
	std::cout << _name << " Hey ! high fives guys !!!" << std::endl;
}

void FragTrap::displayFt(const FragTrap& FragTrap) {
	std::cout << "I'm " << _name << ": check my skill" << std::endl;
	std::cout << "_name : " << FragTrap._name << std::endl;
	std::cout << "_hitPoints : " << _name << " = " << FragTrap._hitPoints << std::endl;
	std::cout << "_energyPoints : " << _name << " = " << FragTrap._energyPoints << std::endl;
	std::cout << "_attackDamage : " << _name << " = " << FragTrap._attackDamage << std::endl;
}