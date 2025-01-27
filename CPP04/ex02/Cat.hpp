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

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Cat : public AAnimal {
	private:
		Brain* brain;
	public:
		Cat(); // constructeur
		Cat(const Cat& other); //copy
		~Cat(); //destructeur
		Cat& operator=(const Cat& other); //assigement
	
	//methodes
		void makeSound() const;
};