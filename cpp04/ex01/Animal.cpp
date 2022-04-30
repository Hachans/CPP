/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 09:28:21 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/30 16:25:51 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Zoo"){
	// std::cout << "Animal class created" << std::endl;
	
}

Animal::~Animal(){
	// std::cout << "Animal class has been destroyed" << std::endl;
}

Animal::Animal(const Animal& obj){
	// std::cout << "Animal class copy constructor" << std::endl;
	this->_type =obj._type;
}

Animal& Animal::operator=(const Animal& obj){
	// std::cout << "Animal class copy asignment" << std::endl;
	this->_type = obj._type;
	return *this;
}

void Animal::makeSound( void ) const{
	// std::cout << "Animals screaming!" << std::endl;
}

std::string Animal::getType( void ) const{
	return this->_type;
}