#pragma once

#include <string>
#include <iostream>

#define RST     "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define REVERSED "\033[7m"

class ClapTrap {
	protected:
		std::string		_name;
		unsigned int 	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public:
		ClapTrap(std::string name); //constuctor
		~ClapTrap(); //destructor
		ClapTrap(const ClapTrap& other); // copy constuctor
		ClapTrap& operator=(const ClapTrap& other); //assignement operator

		//methode:
		void displayCt(const ClapTrap& ClapTrap);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};