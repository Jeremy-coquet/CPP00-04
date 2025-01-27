
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

	// Operator comparisons : >, <, >=, <=, == et !=
	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;

	// arithmetic operators : +, -, *, et /
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;

	//increm/decrem
	Fixed operator++();	// Pré-incrémentation
	Fixed operator++(int);	// Post-incrémentation
	Fixed operator--();	// Pré-décrémentation
	Fixed operator--(int);	// Post-décrémentation

	//min-max
	static const Fixed& min(const Fixed &a, const Fixed &b);
	static const Fixed& min(Fixed &a, Fixed &b);

	static const Fixed& max(const Fixed &a, const Fixed &b);
	static const Fixed& max(Fixed &a, Fixed &b);

private:
	int _fixedPointValue;
	static const int _fractionalBits; //nb of fractionnal bits
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif