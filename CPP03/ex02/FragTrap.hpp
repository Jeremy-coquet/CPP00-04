#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap {
	protected:

	public:
	//constructor
		FragTrap(std::string name);
		FragTrap(const FragTrap& other);

	//destructor
		~FragTrap();
	
	//assignement
		FragTrap& operator=(const FragTrap& other);

	// methodes
		void attack(const std::string& target);
		void displayFt(const FragTrap& FragTrap);
		void highFivesGuys(void);
};