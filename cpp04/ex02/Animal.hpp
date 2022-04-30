/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 09:28:19 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/30 20:58:37 by ekraujin         ###   ########.fr       */
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
		virtual void makeSound( void ) const;
	
};

#endif