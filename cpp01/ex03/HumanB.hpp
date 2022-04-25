/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:33:58 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/25 10:27:02 by ekraujin         ###   ########.fr       */
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