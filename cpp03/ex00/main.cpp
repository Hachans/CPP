/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:23:39 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/29 07:31:30 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	
	ClapTrap	clapTrap1("Clappy");
	ClapTrap	clapTrap3;
	clapTrap1.takeDamage(3);
	clapTrap3.takeDamage(3);
	ClapTrap	clapTrap2(clapTrap1);
	ClapTrap	clapTrap4;
	clapTrap4 = clapTrap3;
	
	clapTrap2.takeDamage(1);
	clapTrap4.takeDamage(1);
	clapTrap1.beRepaired(6);
	clapTrap2.beRepaired(6);
	clapTrap3.beRepaired(6);
	clapTrap4.beRepaired(6);

	clapTrap1.takeDamage(11);
	clapTrap1.attack("James");
	clapTrap1.beRepaired(3);
	
	return 0;
}