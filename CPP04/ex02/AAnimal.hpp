#pragma once

#define RST   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define REVERSED "\033[7m"
#define WHITE   "\033[37m"

#include <string>
#include <iostream>

class AAnimal {
	protected:
		std::string _type;

	public:
		AAnimal(); //constructeur
		AAnimal(const std::string& type); //constructeur surcharge
		virtual ~AAnimal(); //destructeur
		AAnimal(const AAnimal& other); // copy const
		AAnimal& operator=(const AAnimal& other); //assigmement

		//methode
		std::string getType() const;
		virtual void	makeSound(void) const = 0;
};
