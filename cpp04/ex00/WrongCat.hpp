/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:29:46 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/30 11:30:11 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat: public WrongAnimal{
	public:

		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& obj);
		WrongCat& operator=(const WrongCat& boj);

		std::string getType( void ) const;
		void makeSound( void ) const;
	
};

#endif