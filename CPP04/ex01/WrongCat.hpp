#pragma once

#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

class WrongCat : public WrongAnimal {
	private:

	public:
		WrongCat(); // constructeur
		WrongCat(const WrongCat& other); //copy
		~WrongCat(); //destructeur
		WrongCat& operator=(const WrongCat& other); //assigement
	//methode
		void makeSound() const;
};