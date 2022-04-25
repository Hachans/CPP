/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 07:27:26 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/25 08:50:28 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	std::string name;
	public:
	Zombie( void );
	~Zombie( void );
	void announce( void );
	std::string get_name( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif