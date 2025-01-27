#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#define RST   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define REVERSED "\033[7m"
#define WHITE   "\033[37m"


class DiamondTrap: public ScavTrap, public FragTrap
{
	protected:
		std::string		_name;

	public:
	// Constructors
		DiamondTrap();
		DiamondTrap(std::string const &name);
	//copy
		DiamondTrap(const DiamondTrap &copy);
	// Deconstructors
		virtual ~DiamondTrap();

	// Overloaded Operators
		DiamondTrap &operator=(const DiamondTrap &other);

	// Public Methods
		using ScavTrap::attack;
		void attack(const std::string &target);
		void whoAmI(void);
		void displayDt(const DiamondTrap& DiamondTrap);
};