#include "Cat.hpp"


//constructeur
Cat::Cat() : Animal("cat") {
	std::cout << GREEN "cat created" RST << std::endl;
}

//destructeur
Cat::~Cat() {
	std::cout << RED "Cat destroyed!" RST << std::endl;
}

// copy constructor
Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat copied" << std::endl;
	*this = other;
}

//operateur affectation
Cat& Cat::operator=(const Cat& other) {
	if (this != &other)
		this->_type = other._type;
	std::cout << "Cat assigned" << std::endl;
	return *this;
}

void Cat::makeSound() const {
	std::cout << YELLOW << this->_type << ": Miaou Miaou!!!" RST << std::endl;
}
