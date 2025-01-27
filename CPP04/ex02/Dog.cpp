#include "Dog.hpp"


//constructeur
Dog::Dog() : brain(new Brain()) {
	std::cout << CYAN "Dog created" RST << std::endl;
}

// copy constructor
Dog::Dog(const Dog& other) : brain(new Brain(*other.brain)) {
	std::cout << "Dog copied" << std::endl;
	*this = other;
}

//destructeur
Dog::~Dog() {
	std::cout << BLUE "Dog destroyed!" RST << std::endl;
	delete brain;
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
	std::cout << this->_type << ": Wouaff Wouaff!!!" << std::endl;
}
