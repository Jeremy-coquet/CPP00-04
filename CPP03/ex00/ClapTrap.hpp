#pragma once

#include <string>
#include <iostream>

class ClapTrap {
	private:
		std::string		_name;
		unsigned int 	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public:
		ClapTrap(std::string name); //constuctor
		~ClapTrap(); //destructor
		ClapTrap(const ClapTrap& other); // copy const
		ClapTrap& operator=(const ClapTrap& other); //assignement operator

		//methode:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};