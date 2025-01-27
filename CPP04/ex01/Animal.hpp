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

class Animal {
	protected:
		std::string _type;

	public:
		Animal(); //constructeur
		Animal(const std::string& type); //constructeur surcharge
		virtual ~Animal(); //destructeur
		Animal(const Animal& other); // copy const
		Animal& operator=(const Animal& other); //assigmement

		//methode
		std::string getType() const;
		virtual void	makeSound(void) const;
};
