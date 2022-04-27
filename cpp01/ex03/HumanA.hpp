/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:32:58 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/27 08:19:53 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
	public:
	
		std::string _name;
		Weapon &_Weapon;
		
		HumanA( std::string name, Weapon &type );
		~HumanA( void );
		
		void attack( void );
};


#endif