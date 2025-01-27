#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap constructor created " << _name << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << _name << ": ClapTrap destructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
		std::cout <<"operator ClapTrap has been assigned to " << _name << std::endl;
    }
    return *this;
}


//methode
void ClapTrap::attack(const std::string& target) {
	if (_hitPoints > 0 && _energyPoints > 0) {
		std::cout << _name << ": attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints -= 1;
	}
	else {
		std::cout << _name << " doesn't have enough energyPoints or is dead ! " << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints == 0)
		std::cout << _name << ": is already dead !" << std::endl;
	else if (_hitPoints > 0) {
		std::cout << _name << ": take " << amount << " points of domage!" << std::endl;
		if (amount <= _hitPoints)
			_hitPoints -= amount;
		else
			_hitPoints = 0;
			if (!_hitPoints)
				std::cout << _name << ": ichhhhh it's a mortal hurt for " << _name << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints > 0 && _energyPoints > 0) {
		std::cout << _name << ": win " << amount << " hit points!" << std::endl;
		_hitPoints += amount;
		_energyPoints--;
	} else {
		std::cout << _name << " doesn't have enough energyPoints or is dead !" << std::endl;
	}
}