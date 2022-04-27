/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:05:29 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/27 08:19:16 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main( void ){
	
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	
	std::cout << std::endl;
	
	std::cout << "Memory address of string:    " << &str << std::endl;
	std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF: " << &stringREF << std::endl;

	std::cout << std::endl;
	
	std::cout << "Value of string:    " << str << std::endl;
	std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;
	
	return 0;
}