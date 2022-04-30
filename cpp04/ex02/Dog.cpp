/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 09:28:14 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/30 16:31:05 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(){
	std::cout << "Dog class created" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog(){
	std::cout << "Dog class has been destroyed" << std::endl;
	delete this->_brain;
}

Dog::Dog(const Dog& obj){
	std::cout << "Dog class copy constructor" << std::endl;
	this->_type = obj._type;
}

Dog& Dog::operator=(const Dog& obj){
	std::cout << "Dog class copy asignment" << std::endl;
	this->_type = obj._type;
	return *this;
}

void Dog::makeSound( void ) const{
	std::cout << "Woof" << std::endl;
}
