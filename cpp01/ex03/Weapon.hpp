/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:27:46 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/27 08:19:33 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{

		std::string type;
	
	public:

		Weapon( std::string type );
		~Weapon( void );
		
		std::string const& getType() const;
		void setType( std::string newType );
};

#endif