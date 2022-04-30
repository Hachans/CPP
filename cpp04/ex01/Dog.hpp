/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 09:28:12 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/30 16:14:27 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal, public Brain{

		Brain* _brain;
		
	public:

		Dog();
		~Dog();
		Dog(const Dog& obj);
		Dog& operator=(const Dog& boj);;

		void makeSound( void ) const;
	
};

#endif