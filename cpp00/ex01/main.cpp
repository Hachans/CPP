/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:15:43 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/25 07:16:44 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	int i = 0;
	int ind = 0;
	
	std::string tmp;
	std::string str;
	std::string cmd;
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
	
	PhoneBook phonebook;
	
	while (1)
	{
		std::cout << "ADD(1), SEARCH(2), EXIT(3)" << std::endl;
		std::getline (std::cin, cmd);
		if (!cmd.compare("EXIT") || !cmd.compare("3"))
			break;
		else if (!cmd.compare("ADD") || !cmd.compare("1"))
		{
			std::cout << "Enter first name: ";
			std::getline (std::cin, first_name);
			phonebook.get_contact(i)->set_firstname(first_name);
			std::cout << "Enter last name: ";
			std::getline (std::cin, last_name);
			phonebook.get_contact(i)->set_lastname(last_name);
			std::cout << "Enter nick name: ";
			std::getline (std::cin, nick_name);
			phonebook.get_contact(i)->set_nickname(nick_name);
			std::cout << "Enter phone number: ";
			std::getline (std::cin, phone_number);
			phonebook.get_contact(i)->set_phone(phone_number);
			std::cout << "Enter darkest secret: ";
			std::getline (std::cin, darkest_secret);
			phonebook.get_contact(i)->set_secret(darkest_secret);
			std::cout << "Contact added."<< std::endl;
			if (phonebook.size < 8)
				phonebook.size++;
			i++;
			if (i == 8)
				i = 0;
		}
		else if (!cmd.compare("SEARCH") || !cmd.compare("2"))
		{
			if (!phonebook.size) {std::cout << "No Contact found" << std::endl; continue;}
			std::cout << "Select index from 0" << std::endl;
			while(1){
				std::getline (std::cin, tmp);
				if (!tmp.find_first_not_of("0123456789")){std::cout << "Enter a number" << std::endl;}
				else if (std::stoi(tmp) > phonebook.size - 1) {std::cout << "Number out of range" << std::endl;}
				else {break;}
			}
			ind = std::stoi(tmp);
			std::cout << "|   Index  |   Name   | Last Name| Nick Name|" << std::endl;
			std::cout << "|" << std::setw(10) << ind << "|";
			tmp = phonebook.get_contact(ind)->first_name;
			std::cout << std::setw(10) << (tmp.length() > 10 ? tmp.replace(9, 1, ".").erase(10): tmp) << "|";
			tmp = phonebook.get_contact(ind)->last_name;
			std::cout << std::setw(10) << (tmp.length() > 10 ? tmp.replace(9, 1, ".").erase(10): tmp) << "|";
			tmp = phonebook.get_contact(ind)->nick_name;
			std::cout << std::setw(10) << (tmp.length() > 10 ? tmp.replace(9, 1, ".").erase(10): tmp) << "|";
			std::cout << std::endl;
		}
	}
	return 0;
}