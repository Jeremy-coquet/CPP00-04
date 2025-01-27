#pragma once

#include <string>
#include <iostream>

#define RST   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define REVERSED "\033[7m"
#define WHITE   "\033[37m"


class ClapTrap {
	protected:
		std::string		_name;
		unsigned int 	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public:
		//constuctors
		ClapTrap();
		ClapTrap(std::string const &name);
		ClapTrap(const ClapTrap& other);

		//destructor
		~ClapTrap();

		//assignement operator
		ClapTrap& operator=(const ClapTrap& other);

		//methode:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void displayCt(const ClapTrap& ClapTrap);
};