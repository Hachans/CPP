/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:42:09 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/27 11:20:59 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	
	Fixed a(15);
	Fixed b(3);
	std::cout << std::endl;
	std::cout << "Basic operations" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "a + b: " << a + b << std::endl;
	std::cout << "a - b: " << a - b << std::endl;
	std::cout << "a * b: " << a * b << std::endl;
	std::cout << "a / b: " << a / b << std::endl;
	std::cout << "max: " << Fixed::max( a, b ) << std::endl;
	std::cout << "min: " << Fixed::min( a, b ) << std::endl;
	std::cout << std::endl;
	
	Fixed a1;
	Fixed const b1( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "Subject test" << std::endl;
	std::cout << a1 << std::endl;
	std::cout << ++a1 << std::endl;
	std::cout << a1 << std::endl;
	std::cout << a1++ << std::endl;
	std::cout << a1 << std::endl;
	
	std::cout << b1 << std::endl;

	std::cout << Fixed::max( a1, b1 ) << std::endl;
	
	return 0;
}