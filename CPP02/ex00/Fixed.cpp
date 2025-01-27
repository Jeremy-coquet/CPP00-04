
 #include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl; 
}

Fixed::Fixed(const Fixed &other) : _fixedPointValue(other.getRawBits()) {
	std::cout << "Copy constructor called" << std:: endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assigmement operator called" << std::endl;
	if (this != &other)
		this->_fixedPointValue = other.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destrcutor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return  _fixedPointValue;
}

void Fixed::setRawbits(int const raw) {
	_fixedPointValue = raw;
}