#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

#define RST   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define REVERSED "\033[7m"
#define WHITE   "\033[37m"


class ScavTrap : virtual public ClapTrap {
	protected:

	public:
	//constructors
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& other);
	//destructor
		~ScavTrap();
		
	//assignement
		ScavTrap& operator=(const ScavTrap& other);

	//methodes
		void attack(const std::string& target);
		void guardGate();
		void displaySt(const ScavTrap& ScavTrap);
};