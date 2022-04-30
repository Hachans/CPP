/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:31:54 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/30 19:52:42 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain class created" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain class has been destroyed" << std::endl;
}

Brain::Brain(const Brain& obj){
	std::cout << "Brain class copy constructor" << std::endl;
	*this = obj;
}

Brain& Brain::operator=(const Brain& obj){
	std::cout << "Brain class copy asignment" << std::endl;
	std::copy(obj.getIdeas(), obj.getIdeas() + 100, this->_ideas);
	return *this;
}

const std::string* Brain::getIdeas( void ) const{
	return this->_ideas;
}

void Brain::setIdeas( const std::string* _ideas ){
	std::copy(_ideas, _ideas + 100, this->_ideas);
}