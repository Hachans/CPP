/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:12:51 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/29 11:05:01 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	static const int	init_HP = 100;
	static const int	init_EP = 50;
	static const int	init_DMG = 20;
	
	public:
	
		ScavTrap();
		ScavTrap( std::string name );
		~ScavTrap();
		ScavTrap(const ScavTrap &obj);
		ScavTrap& operator=(const ScavTrap &obj);
		
		void attack(const std::string& target);
		void guardGate();
};
#endif