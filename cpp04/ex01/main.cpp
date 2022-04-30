/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 09:28:10 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/30 19:56:06 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{

	{
		Brain brain;
		
		std::string str[100];
		const std::string *ideas;
		str[0] = "Macho";
		str[1] = "Pacho";
		str[2] = "Sicho";
		str[3] = "Chicho";

		brain.setIdeas(str);
		ideas = brain.getIdeas();
		for (int i = 0; i < 4; i++)
			std::cout << ideas[i] << std::endl;
		
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "SUBJECT TEST" << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "SUBJECT TEST 2" << std::endl;
	{
	
		Animal* animals[10];
		for(int i = 0; i < 10; i++)
		{
			if (i < 5) {animals[i] = new Cat();}
			else {animals[i] = new Dog();}
		}
		
		for(int i = 0; i < 10; i++)
		{
			std::cout << animals[i]->getType() << std::endl;
		}
		for(int i = 0; i < 10; i++)
		{
			delete animals[i];
		}

	}	
	return 0;
}