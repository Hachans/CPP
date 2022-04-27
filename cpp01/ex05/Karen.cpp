/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:26:31 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/26 13:13:00 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void ){
	
}

Karen::~Karen( void ){
	
}

void Karen::complain( std::string level ){
	getFunc f[4]= { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string l[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++){
		if (level == l[i])
			(this->*f[i])();
	}
}

void Karen::debug( void ){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Karen::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Karen::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Karen::error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}