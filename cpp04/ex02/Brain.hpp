/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:37:10 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/30 19:50:49 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{

		std::string _ideas[100];
	
	public:

		Brain();
		~Brain();
		Brain(const Brain& obj);
		Brain& operator=(const Brain& boj);

		void setIdeas(const std::string* ideas );
		const std::string* getIdeas( void ) const;
};

#endif