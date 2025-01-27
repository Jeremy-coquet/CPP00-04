#pragma once

#include <string>
#include <iostream>

class WrongAnimal {
	protected:
		std::string _type;

	public:
		WrongAnimal(); //constructeur
		WrongAnimal(const std::string& type); //constructeur surcharge
		virtual ~WrongAnimal(); //destructeur
		WrongAnimal(const WrongAnimal& other); // copy const
		WrongAnimal& operator=(const WrongAnimal& other); //assigmement

		//methode
		std::string getType() const;
		virtual void	makeSound(void) const;
};
