#include "AAnimal.hpp"

//constructeur
AAnimal::AAnimal() : _type("Unknow") {
	std::cout << GREEN "Constructor AAnimal called" RST << std::endl;
}

AAnimal::AAnimal(const std::string& type) : _type(type) {
	std::cout << "surcharged constructor AAnimal called" << std::endl;
}

// copy constructor
AAnimal::AAnimal(const AAnimal& other) {
	std::cout << "AAnimal copied" << std::endl;
	*this = other;
}

//destructeur
AAnimal::~AAnimal() {
	std::cout << RED "AAnimal destroyed!" RST << std::endl;
}


//operateur affectation
AAnimal& AAnimal::operator=(const AAnimal& other) {
	if (this != &other)
		this->_type = other._type;
	std::cout << "AAnimal assigned" << std::endl;
	return *this;
}

//mehtode
std::string AAnimal::getType() const {
	return this->_type;
}
