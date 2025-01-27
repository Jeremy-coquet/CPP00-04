
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public: 
	Fixed(); // default constructor
	Fixed(const Fixed &other); // Copy constructor
	Fixed &operator=(const Fixed &other);  //assignement operator
	~Fixed(); // Destructor
	int getRawBits() const;
	void setRawbits(int const raw);

private:
	int _fixedPointValue;
	static const int _fractionalBits; //nb of fractionnal bits

};

#endif