/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 09:28:19 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/02 11:01:59 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
	protected:
	
		Animal();
		std::string _type;
		
	public:

		virtual ~Animal();
		Animal(const Animal& obj);
		Animal& operator=(const Animal& boj);

		std::string getType( void ) const;
		virtual void makeSound( void ) const = 0;
	
};

#endif