#include "WrongCat.hpp"


//constructeur
WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat created" << std::endl;
}

//destructeur
WrongCat::~WrongCat() {
	std::cout << "WrongCat destroyed!" << std::endl;
}

// copy constructor
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "WrongCat copied" << std::endl;
	*this = other;
}

//operateur affectation
WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other)
		this->_type = other._type;
	std::cout << "WrongCat assigned" << std::endl;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << this->_type << ": Wrong Miaou Miaou!!!" << std::endl;
}
