/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:23:39 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/29 10:57:52 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
		{
		std::cout <<  "*** Basic Tests and Gate Guard ***" << std::endl;
		ClapTrap	clapTrap("Clappy");
		ScavTrap	scavTrap;

		scavTrap.attack("Jack");
		clapTrap.attack("Sereena");
		scavTrap.guardGate();
		scavTrap.takeDamage(30);
		scavTrap.beRepaired(10);
		scavTrap.takeDamage(50);
		scavTrap.takeDamage(40);
		scavTrap.takeDamage(10);
		scavTrap.beRepaired(1);
		scavTrap.attack("Sereena");
		clapTrap.beRepaired(5);
	}
	{
		std::cout << std::endl << "*** Copying ***" << std::endl;
		ScavTrap	scavTrap;

		scavTrap.takeDamage(30);
		ScavTrap	sereena2 ("SereenaCopy");
		sereena2 = scavTrap;
		sereena2.attack("Jack");
		ScavTrap	sereena3(scavTrap);

	}
	{

		std::cout << std::endl << "*** Repair and attack limits ***" << std::endl;
		ScavTrap	scavTrap;

		for (int i = 0; i < 50; i++)
			scavTrap.attack("random human");
		scavTrap.beRepaired(10);
		scavTrap.attack("random human");
		scavTrap.takeDamage(100);
		scavTrap.takeDamage(100);
	}
	// {
	// 	ClapTrap	clapTrap1("Clappy");
	// 	ClapTrap	clapTrap3;
	// 	clapTrap1.takeDamage(3);
	// 	clapTrap3.takeDamage(3);
	// 	ClapTrap	clapTrap2(clapTrap1);
	// 	ClapTrap	clapTrap4;
	// 	clapTrap4 = clapTrap3;
		
	// 	clapTrap2.takeDamage(1);
	// 	clapTrap4.takeDamage(1);
	// 	clapTrap1.beRepaired(6);
	// 	clapTrap2.beRepaired(6);
	// 	clapTrap3.beRepaired(6);
	// 	clapTrap4.beRepaired(6);

	// 	clapTrap1.takeDamage(11);
	// 	clapTrap1.attack("James");
	// 	clapTrap1.beRepaired(3);
	// }
	// std::cout << std::endl;
	// {
	// 	ScavTrap scav1;
	// 	scav1.takeDamage(16);
	// 	scav1.beRepaired(23);
	// 	scav1.guardGate();
		
	// 	std::cout << std::endl;
		
	// 	ScavTrap scav2("Scav2");
	// 	scav2.takeDamage(45);
	// 	scav2.beRepaired(15);

	// 	std::cout << std::endl;
		
	// 	ScavTrap scav3(scav1);
	// 	ScavTrap scav4;
	// 	scav4 = scav2;
	// }
	
	
	
	return 0;
}