#include "Animal.hpp"

//constructeur
Animal::Animal() : _type("Unknow") {
	std::cout << GREEN "Constructor Animal called" RST << std::endl;
}

Animal::Animal(const std::string& type) : _type(type) {
	std::cout << GREEN "surcharged constructor Animal called" RST << std::endl;
}

// copy constructor
Animal::Animal(const Animal& other) {
	std::cout << "Animal copied" << std::endl;
	*this = other;
}

//destructeur
Animal::~Animal() {
	std::cout << RED "Animal destroyed!" RST << std::endl;
}


//operateur affectation
Animal& Animal::operator=(const Animal& other) {
	if (this != &other)
		this->_type = other._type;
	std::cout << "Animal assigned" << std::endl;
	return *this;
}

//mehtode
std::string Animal::getType() const {
	return this->_type;
}

void	Animal::makeSound(void) const {
	std::cout << YELLOW "no sound" RST << std::endl;
}
