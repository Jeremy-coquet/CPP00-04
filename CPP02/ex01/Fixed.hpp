
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public: 
	Fixed(); // default constructor
	Fixed(const int fixedPointValue);
	Fixed(const float fixedPointValue);
	Fixed(const Fixed &other); // Copy constructor
	Fixed &operator=(const Fixed &other);  //assignement operator
	~Fixed(); // Destructor
	int getRawBits() const;
	void setRawbits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;

private:
	int _fixedPointValue;
	static const int _fractionalBits; //nb of fractionnal bits

};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif