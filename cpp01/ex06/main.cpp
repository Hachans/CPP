/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:54:04 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/25 20:16:55 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv){
	
	if (argc != 2) {return 1;}
	Karen Stacy;
	std::string level = argv[1];
	if (!level.compare("DEBUG") || !level.compare("INFO") || !level.compare("WARNING") || !level.compare("ERROR")){
		Stacy.complain(level);
	}
	else{
		std::cout << "[  Probably complaining about insignificant problems ]" << std::endl;
	}
	return 0;
}