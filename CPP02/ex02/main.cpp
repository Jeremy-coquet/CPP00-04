/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 09:59:45 by jcoquet           #+#    #+#             */
/*   Updated: 2024/08/20 09:11:36 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

void	test_subject() {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
}


void	test_comparison_operator() {
	Fixed a(10); 
	Fixed b(20);
	Fixed c(20);

	std::cout << "[TEST <] " << std::endl;
	std::cout << "valeur de a : " << a << ", valeur de b : " << b << std::endl;
	Fixed result1 = a < b;
	Fixed result2 = b < a;
	std::cout << "valeur de result1 de a < b = "<< result1 << std::endl;
	std::cout << "valeur de result2 de b < a = "<< result2 << std::endl << std::endl;

	std::cout << "[TEST >] " << std::endl;
	std::cout << "valeur de a : " << a << ", valeur de b : " << b << std::endl;
	Fixed result3 = a > b;
	Fixed result4 = b > a;
	std::cout << "valeur de result3 de a > b = "<< result3 << std::endl;
	std::cout << "valeur de result4 de b > a = "<< result4 << std::endl << std::endl;

	std::cout << "[TEST >=] " << std::endl;
	std::cout << "valeur de a : " << a << ", valeur de b : " << b << ", valeur de c : " << c << std::endl;
	Fixed result5 = b >= c;
	Fixed result6 = a >= b;
	std::cout << "valeur de result5 de b >= c = "<< result5 << std::endl;
	std::cout << "valeur de result6 de a >= b = "<< result6 << std::endl << std::endl;

	std::cout << "[TEST <=] " << std::endl;
	std::cout << "valeur de a : " << a << ", valeur de b : " << b << ", valeur de c : " << c << std::endl;
	Fixed result7 = b <= c;
	Fixed result8 = b <= a;
	std::cout << "valeur de result7 de b <= c = " << result7 << std::endl;
	std::cout << "valeur de result8 de b <= a = " << result8 << std::endl << std::endl;

	std::cout << "[TEST ==] " << std::endl;
	std::cout << "valeur de a : " << a << ", valeur de b : " << b << ", valeur de c : " << c << std::endl;
	Fixed result9 = a == b;
	Fixed result10 = b == c;
	std::cout << "valeur de result9 de a == b = " << result7 << std::endl;
	std::cout << "valeur de result10 de b == c = " << result8 << std::endl << std::endl;

	std::cout << "[TEST !=] " << std::endl;
	std::cout << "valeur de a : " << a << ", valeur de b : " << b << ", valeur de c : " << c << std::endl;
	Fixed result11 = a != b;
	Fixed result12 = b != c;
	std::cout << "valeur de result11 de a != b = " << result11 << std::endl;
	std::cout << "valeur de result12 de b != c = " << result12 << std::endl << std::endl;
}

void	test_aryhmetique_operator() {

	Fixed a(10); 
	Fixed b(20);

	std::cout << "[TEST +] " << std::endl;
	std::cout << "valeur de a : " << a << " valeur de b : " << b << std::endl;
	Fixed result1 = a + b;
	std::cout << "valeur de result1 de a + b = "<< result1 << std::endl << std::endl;

	std::cout << "[TEST -] " << std::endl;
	std::cout << "valeur de a : " << a << " valeur de b : " << b << std::endl;
	Fixed result2 = a - b;
	std::cout << "valeur de result2 de a - b = "<< result2 << std::endl << std::endl;

	std::cout << "[TEST *] " << std::endl;
	std::cout << "valeur de a : " << a << " valeur de b : " << b << std::endl;
	Fixed result3 = a * b;
	std::cout << "valeur de result3 de a * b = "<< result3 << std::endl << std::endl;

	std::cout << "[TEST /] " << std::endl;
	std::cout << "valeur de a : " << a << " valeur de b : " << b << std::endl;
	Fixed result4 = a / b;
	std::cout << "valeur de result4 de a / b = "<< result4 << std::endl << std::endl;
}

void	test_increment_decrement_operator() {
	Fixed a(10);

	 std::cout << "Valeur de a: " << a << std::endl << std::endl; 

	// Test pré-incrémentation
	std::cout << "pre-increment: " << ++a << std::endl;
	std::cout << "Valeur de a : " << a << std::endl << std::endl;

	// Test post-incrémentation
	std::cout << "post-increment: " << a++ << std::endl;
	std::cout << "Valeur de a :  " << a << std::endl << std::endl;

	// Test pré-décrémentation
	std::cout << "pre-decrement: " << --a << std::endl;
	std::cout << "Valeur de a :  " << a << std::endl << std::endl;

	// Test post-décrémentation
	std::cout << "post-decrement: " << a-- << std::endl;
	std::cout << "Valeur de a :  " << a << std::endl << std::endl;
}

void	test_min_max() {
	Fixed a(10);
	Fixed b(20);

	std::cout << "[min]" << std::endl;
	std::cout << "valeur de a : " << a << " valeur de b : " << b << std::endl;
	Fixed min1 = Fixed::min(a, b);
	std::cout << "valeur min " << min1 << std::endl << std::endl;

	std::cout << "[min const]" << std::endl;
	std::cout << "valeur de a const : " << a << " valeur de b const : " << b << std::endl;
	Fixed min2 = Fixed::min(a, b);
	std::cout << "valeur min const " << min2 << std::endl << std::endl;

	std::cout << "[max]" << std::endl;
	std::cout << "valeur de a : " << a << " valeur de b : " << b << std::endl;
	Fixed max1 = Fixed::max(a, b);
	std::cout << "valeur max " << max1 << std::endl << std::endl;

	std::cout << "[max const]" << std::endl;
	std::cout << "valeur de a const : " << a << " valeur de b const: " << b << std::endl;
	Fixed max2 = Fixed::max(a, b);
	std::cout << "valeur max const " << max2 << std::endl;
}

int	main (int ac, char **av)
{
	if (ac == 2) {
		int test  = atoi(av[1]);
		switch (test) {
			case(1):
				test_subject();
				break ;
			case(2):
				test_comparison_operator();
				break ;
			case(3):
				test_aryhmetique_operator();
				break ;
			case(4):
				test_increment_decrement_operator();
				break ;
			case(5):
				test_min_max();
				break;
			default:
				std::cout << "WRONG ARGUMENT juste one argument between 1 and 5" << std::endl;
			}
		} else {
			std::cout << "WRONG ARGUMENT juste one argument between 1 and 5" << std::endl;
	}
	return (0);
}