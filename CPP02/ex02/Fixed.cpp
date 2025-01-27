
 #include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _fixedPointValue(0) {
	// std::cout << "Default constructor called" << std::endl; 
}
//constructor that takes an int and stores it as a fixed point value
Fixed::Fixed(const int fixedPointValue) {
	// std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = fixedPointValue << _fractionalBits;
}

//constructor that takes a float and stores it as a fixed point value
Fixed::Fixed(const float fixedPointValue) {
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(fixedPointValue * (1 << _fractionalBits));
}

//copy constructor
Fixed::Fixed(const Fixed &other) : _fixedPointValue(other.getRawBits()) {
	// std::cout << "Copy constructor called" << std:: endl;
}

//assignement operator
Fixed &Fixed::operator=(const Fixed &other) {
	// std::cout << "Copy assigmement operator called" << std::endl;
	if (this != &other)
		this->_fixedPointValue = other.getRawBits();
	return *this;
}

//destructor
Fixed::~Fixed() {
	// std::cout << "Destrcutor called" << std::endl;
}

//Methodes
int Fixed::getRawBits() const {
	// std::cout << "getRawBits member function called" << std::endl;
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

// comparison Operator: >, <, >=, <=, == et !=.
bool Fixed::operator>(const Fixed &other) const {
	return _fixedPointValue > other._fixedPointValue;
}

bool Fixed::operator<(const Fixed &other) const {
	return _fixedPointValue < other._fixedPointValue;
}

bool Fixed::operator>=(const Fixed &other) const {
	return _fixedPointValue >= other._fixedPointValue;
}

bool Fixed::operator<=(const Fixed &other) const {
	return _fixedPointValue <= other._fixedPointValue;
}

bool Fixed::operator==(const Fixed &other) const {
	return _fixedPointValue == other._fixedPointValue;
}

bool Fixed::operator!=(const Fixed &other) const {
	return _fixedPointValue != other._fixedPointValue;
}

// arithmetic operators: +, -, *, et /.
Fixed Fixed::operator+(const Fixed &other) const {
	Fixed result;
	result._fixedPointValue = _fixedPointValue + other._fixedPointValue;
	return result;
}

Fixed Fixed::operator-(const Fixed &other) const {
	Fixed result;
	result._fixedPointValue = _fixedPointValue - other._fixedPointValue;
	return result;
}

Fixed Fixed::operator*(const Fixed &other) const {
	Fixed result;
	result._fixedPointValue = _fixedPointValue * other._fixedPointValue >> _fractionalBits;
	return result;
}

Fixed Fixed::operator/(const Fixed &other) const {
	Fixed result;
	result._fixedPointValue = _fixedPointValue / other._fixedPointValue >> _fractionalBits;
	return result;
}

//incrementation/decrementation
Fixed Fixed::operator++() {
	_fixedPointValue += 1; //<< _fractionalBits;
	return *this;
}

// Post-décrémentation
Fixed Fixed::operator--(int) {
	Fixed temp = *this;
	--(*this);
	return temp;
}

Fixed Fixed::operator--() {
	_fixedPointValue -= 1; //<< _fractionalBits;
	return *this;
}

// Post-incrémentation
Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	++(*this);
	return temp;
}

//min-max
const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
	if (a < b)
		return a;
	return b;
}

const Fixed& Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
	if (a > b)
		return a;
	return b;
}

const Fixed& Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return a;
	return b;
}