
 #include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl; 
}
//constructor that takes an int and stores it as a fixed point value
Fixed::Fixed(const int fixedPointValue) {
	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = fixedPointValue << _fractionalBits;
}

//constructor that takes a float and stores it as a fixed point value
Fixed::Fixed(const float fixedPointValue) {
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(fixedPointValue * (1 << _fractionalBits));
}

//copy constructor
Fixed::Fixed(const Fixed &other) : _fixedPointValue(other.getRawBits()) {
	std::cout << "Copy constructor called" << std:: endl;
}

//assignement operator
Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assigmement operator called" << std::endl;
	if (this != &other)
		this->_fixedPointValue = other.getRawBits();
	return *this;
}

//destructor
Fixed::~Fixed() {
	std::cout << "Destrcutor called" << std::endl;
}


//Methodes
int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return  _fixedPointValue;
}
void Fixed::setRawbits(int const raw) {
	_fixedPointValue = raw;
}

float Fixed::toFloat( void ) const {
	return (float)_fixedPointValue / (1 << _fractionalBits);
}
	
int Fixed::toInt(void) const {
	return _fixedPointValue >> _fractionalBits;
}

// operator <<
std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}