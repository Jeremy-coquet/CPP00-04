#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : virtual public ClapTrap {
	protected:

	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		//methodes
		void 	attack(const std::string& target);
		void 	guardGate();
		void 	displaySt(const ScavTrap& ScavTrap);
};