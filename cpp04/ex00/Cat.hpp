/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 09:28:15 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/30 11:36:18 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat: public Animal{
	public:

		Cat();
		~Cat();
		Cat(const Cat& obj);
		Cat& operator=(const Cat& boj);

		void makeSound( void ) const;
	
};

#endif