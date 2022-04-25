/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 07:26:56 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/25 08:25:46 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	std::string name;

	while(1){
		std::getline (std::cin, name);
		if (!name.compare("exit")) break;
		randomChump(name);
	}
	return 0;
}