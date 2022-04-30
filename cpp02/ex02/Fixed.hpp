/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:42:48 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/27 11:19:20 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed{
	
		int _int;
		static const int _bits;

	public:

		Fixed( const int i );
		Fixed( const float i );
		Fixed();
		~Fixed();

		Fixed( const Fixed &obj );
		Fixed& operator=( const Fixed& obj );

		Fixed& operator++(); //prefix
		Fixed operator++( int ); // postfix
		Fixed& operator--(); //prefix
		Fixed operator--( int ); // postfix
		
		Fixed operator+( const Fixed& obj ) const;
		Fixed operator-( const Fixed& obj ) const;
		Fixed operator*( const Fixed& obj ) const;
		Fixed operator/( const Fixed& obj ) const;
		
		bool operator==( const Fixed& obj ) const;
		bool operator!=( const Fixed& obj ) const;
		bool operator>=( const Fixed& obj ) const;
		bool operator<=( const Fixed& obj ) const;
		bool operator>( const Fixed& obj ) const;
		bool operator<( const Fixed& obj ) const;
		
		static const Fixed& max( const Fixed& obj, const Fixed& obj2 );
		static const Fixed& min( const Fixed& obj, const Fixed& obj2 );
		static Fixed& max( Fixed& obj, Fixed& obj2 );
		static Fixed& min( Fixed& obj, Fixed& obj2 );
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<( std::ostream& os, const Fixed& numb );



#endif