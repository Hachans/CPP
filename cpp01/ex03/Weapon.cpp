/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:45:15 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/25 10:24:56 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon( std::string type ){
	this->type = type;
}

Weapon::~Weapon( void ){
	
}

std::string const& Weapon::getType( void ) const{
	std::string const& ref = this->type;
	return ref;
}

void Weapon::setType( std::string newType ){
	this->type = newType;
}