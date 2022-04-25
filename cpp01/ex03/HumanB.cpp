/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:38:11 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/25 10:31:12 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) :
	_name(name)
{}

void HumanB::setWeapon( Weapon &type ){
	this->_Weapon = &type;
}

HumanB::~HumanB( void ){
	
}

void HumanB::attack( void ){
	std::cout << this->_name << " attacks with their " << this->_Weapon->getType() << std::endl;
}
