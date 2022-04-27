/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:33:58 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/27 08:19:44 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	public:
	
		std::string _name;
		Weapon *_Weapon;
		
		HumanB( std::string name );
		~HumanB( void );
		
		void setWeapon( Weapon &type );
		void attack( void );
};


#endif