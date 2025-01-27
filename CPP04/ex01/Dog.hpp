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

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Dog : public Animal {
	private:
		Brain* brain;

	public:
	Dog(); //constructeur
	Dog(const Dog& other); //copy
	~Dog();	//destructeur
	Dog& operator=(const Dog& other); //assignement

	//methodes
	void makeSound() const;
};