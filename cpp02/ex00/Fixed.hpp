/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:42:48 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/27 18:24:39 by ekraujin         ###   ########.fr       */
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
	
		Fixed();
		~Fixed();
		
		Fixed(const Fixed &obj);
		Fixed& operator=(const Fixed &obj);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif