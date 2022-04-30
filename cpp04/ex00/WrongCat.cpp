/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:29:19 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/30 11:35:29 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal(){
	std::cout << "WrongCat class created" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat class has been destroyed" << std::endl;
}

// WrongCat& WrongCat::operator=(const WrongCat& obj){
	
// }

std::string WrongCat::getType( void ) const{
	return _type;
}

void WrongCat::makeSound( void ) const{
	std::cout << "Wrong Meoww" << std::endl;
}