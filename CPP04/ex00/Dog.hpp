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
#include <string>
#include <iostream>

class Dog : public Animal {
	private:


	public:
	Dog();
	Dog(const Dog& other);
	~Dog();
	Dog& operator=(const Dog& other);

	void makeSound() const;
};