/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 07:27:26 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/27 08:18:39 by ekraujin         ###   ########.fr       */
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
		void set_name( std::string name );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif