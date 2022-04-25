/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:21:40 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/25 19:55:08 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main( void ){
	
	Karen Stacy;
	std::cout << std::endl;
	Stacy.complain("WARNING");
	std::cout << std::endl;
	Stacy.complain("INFO");
	std::cout << std::endl;
	Stacy.complain("DEBUG");
	std::cout << std::endl;
	Stacy.complain("ERROR");
	std::cout << std::endl;
	return 0;
}