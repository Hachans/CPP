/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 09:28:15 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/02 09:48:36 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{

		Brain* _brain;
		
	public:

		Cat();
		~Cat();
		Cat(const Cat& obj);
		Cat& operator=(const Cat& boj);

		void makeSound( void ) const;
	
};

#endif