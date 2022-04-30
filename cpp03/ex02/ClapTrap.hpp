/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:23:41 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/29 10:32:37 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap{
	
	static const int	init_HP = 10;
	static const int	init_EP = 10;
	static const int	init_DMG = 0;

	protected:
	
		std::string _name;
		int _HP;
		int _EP;
		int _DMG;
		int max_HP;
		
	public:

		ClapTrap();
		ClapTrap( std::string name );
		~ClapTrap();
		ClapTrap(const ClapTrap &obj);
		ClapTrap& operator=(const ClapTrap &obj);
		
	
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif