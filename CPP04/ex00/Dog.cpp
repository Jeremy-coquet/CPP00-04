#include "Dog.hpp"


//constructeur
Dog::Dog() : Animal("Dog") {
	std::cout << GREEN "Dog created" RST << std::endl;
}

//destructeur
Dog::~Dog() {
	std::cout << RED "Dog destroyed!" RST << std::endl;
}

// copy constructor
Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog copied" << std::endl;
	*this = other;
}

//operateur affectation
Dog& Dog::operator=(const Dog& other) {
	if (this != &other)
		this->_type = other._type;
	std::cout << "Dog assigned" << std::endl;
	return *this;
}

//methode
void Dog::makeSound() const {
	std::cout << YELLOW << this->_type << ": Wouaff Wouaff!!!" RST << std::endl;
}
