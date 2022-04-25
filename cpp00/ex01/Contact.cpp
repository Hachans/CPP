/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:35:15 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/24 13:54:03 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){

}

Contact::~Contact(void){

}

void Contact::set_firstname(std::string& str){
	this->first_name = str;
}

void Contact::set_lastname(std::string& str){
	this->last_name = str;
}

void Contact::set_nickname(std::string& str){
	this->nick_name = str;
}

void Contact::set_phone(std::string& str){
	this->phone_number = str;
}

void Contact::set_secret(std::string& str){
	this->darkest_secret = str;
}