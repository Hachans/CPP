/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 08:28:00 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/25 08:58:35 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ){

}

Zombie::~Zombie( void ){
	std::cout << get_name() << ": " << "got burried" << std::endl;
}

void Zombie::announce( void ){
	std::cout << get_name() << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::get_name( void ){
	return Zombie::name;
}

void Zombie::set_name( std::string name ){
	this->name = name;
}