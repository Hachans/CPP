/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:28:41 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/30 11:28:54 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Zoo"){
	std::cout << "WrongAnimal class created" << std::endl;
	
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal class has been destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj){
	std::cout << "WrongAnimal class copy constructor" << std::endl;
	this->_type =obj._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj){
	std::cout << "WrongAnimal class copy asignment" << std::endl;
	this->_type = obj._type;
	return *this;
}

void WrongAnimal::makeSound( void ) const{
	std::cout << "WrongAnimals screaming!" << std::endl;
}

std::string WrongAnimal::getType( void ) const{
	return this->_type;
}