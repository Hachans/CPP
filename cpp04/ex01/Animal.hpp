/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 09:28:19 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/30 11:19:39 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
	protected:
	
		std::string _type;
		
	public:

		Animal();
		virtual ~Animal();
		Animal(const Animal& obj);
		Animal& operator=(const Animal& boj);

		std::string getType( void ) const;
		virtual void makeSound( void ) const;
	
};

#endif