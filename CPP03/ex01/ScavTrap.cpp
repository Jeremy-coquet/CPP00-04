#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << GREEN << "ScavTrap constuctor called" << RST << std:: endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout  << "ScavTrap " << _name << " has been copied!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap " << _name << " has been assigned!" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << RED << "ScavTrap destructor called" << RST << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (_hitPoints > 0 && _energyPoints > 0) {
		std::cout << _name << ": attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints -= 1;
	}
	else {
		std::cout << MAGENTA << _name << " doesn't have enough energyPoints or is dead ! " << RST <<std::endl;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap" << _name << " is now in Gate keeper mode!" << std::endl;
}


void ScavTrap::displaySt(const ScavTrap& ScavTrap) {
	std::cout << REVERSED << "I'm " << ScavTrap._name << ": check my skill" << std::endl;
	std::cout << "_name : " << ScavTrap._name << std::endl;
	std::cout << "_hitPoints : " << ScavTrap._name << " = " << ScavTrap._hitPoints << std::endl;
	std::cout << "_energyPoints : " << ScavTrap._name << " = " << ScavTrap._energyPoints << std::endl;
	std::cout << "_attackDamage : " << ScavTrap._name << " = " << ScavTrap._attackDamage << RST <<std::endl;
}