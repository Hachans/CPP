/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 09:28:10 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/30 21:05:15 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	
	{
		// Animal *animal = new Animal;
		// animal->makeSound();
		// delete animal;
		
		Cat *cat = new Cat;
		cat->makeSound();
		std::cout << std::endl;
		Dog *dog = new Dog;
		dog->makeSound();

		std::cout << std::endl;
		
		delete cat;
		delete dog;
	}

	return 0;
}