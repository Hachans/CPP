/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:33:53 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/27 08:23:50 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen{

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		
	public:
	
		typedef void (Karen::*getFunc)(void);

		Karen( void );
		~Karen( void );
		
		void complain( std::string level );
};

#endif