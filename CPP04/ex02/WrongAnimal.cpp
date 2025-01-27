#include "WrongAnimal.hpp"

//constructeur
WrongAnimal::WrongAnimal() : _type("Unknow") {
	std::cout << "Constructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : _type(type) {
	std::cout << "surcharged constructor WrongAnimal called" << std::endl;
}

// copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	std::cout << "WrongAnimal copied" << std::endl;
	*this = other;
}

//destructeur
WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destroyed!" << std::endl;
}


//operateur affectation
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other)
		this->_type = other._type;
	std::cout << "WrongAnimal assigned" << std::endl;
	return *this;
}

//mehtode
std::string WrongAnimal::getType() const {
	return this->_type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "no sound" << std::endl;
}
