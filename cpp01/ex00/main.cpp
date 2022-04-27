/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 07:26:56 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/27 08:15:03 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	
	Zombie *Bugga1 = newZombie("Zombie1");
	Bugga1->announce();
	
	randomChump("Zombie2");
	delete Bugga1;
	return 0;
}