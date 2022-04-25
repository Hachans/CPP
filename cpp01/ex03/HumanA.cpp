/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:35:26 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/25 10:19:33 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &type ) :
	_name(name),
	_Weapon(type)
{}

HumanA::~HumanA( void ){
	
}

void HumanA::attack( void ){
	std::cout << this->_name << " attacks with their " << this->_Weapon.getType() << std::endl;
}
