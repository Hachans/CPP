/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 08:28:00 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/27 08:18:06 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ){

}

Zombie::~Zombie( void ){
	std::cout << _name << ": " << "got burried" << std::endl;
}

void Zombie::announce( void ){
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name( std::string name ){
	this->_name = name;
}