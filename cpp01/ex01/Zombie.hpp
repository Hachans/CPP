/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 08:28:10 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/27 08:18:22 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	
		std::string _name;
	
	public:
		Zombie( void );
		~Zombie( void );
		
		void announce( void );
		void set_name ( std::string name );
};

Zombie* zombieHorde( int N, std::string name );

#endif