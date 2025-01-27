#include "Cat.hpp"


//constructeur
Cat::Cat() : brain(new Brain()) {
	std::cout << CYAN "cat created" RST << std::endl;
}

// copy constructor
Cat::Cat(const Cat& other) : brain(new Brain(*other.brain)) {
	std::cout << "Cat copied" << std::endl;
	*this = other;
}

//destructeur
Cat::~Cat() {
	std::cout << BLUE "Cat destroyed!" RST << std::endl;
	delete brain;
}

//operateur affectation
Cat& Cat::operator=(const Cat& other) {
	if (this != &other)
		this->_type = other._type;
	std::cout << "Cat assigned" << std::endl;
	return *this;
}

//methode
void Cat::makeSound() const {
	std::cout << this->_type << ": Miaou Miaou!!!" << std::endl;
}
