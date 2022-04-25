/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:10:28 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/24 14:20:56 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	this->size = 0;
}

PhoneBook::~PhoneBook(void){

}

Contact *PhoneBook::get_contact(int i){
	return &_contact[i];
}

