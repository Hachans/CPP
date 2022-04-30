/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 09:28:17 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/30 16:31:13 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal(){
	std::cout << "Cat class created" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat(){
	std::cout << "Cat class has been destroyed" << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat& obj){
	std::cout << "Cat class copy constructor" << std::endl;
	this->_type = obj._type;
}

Cat& Cat::operator=(const Cat& obj){
	std::cout << "Cat class copy asignment" << std::endl;
	this->_type = obj._type;
	return *this;
}

void Cat::makeSound( void ) const{
	std::cout << "Meoww" << std::endl;
}
