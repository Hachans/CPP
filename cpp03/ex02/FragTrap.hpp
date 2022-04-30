/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 11:05:04 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/29 11:08:49 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	static const int	init_HP = 100;
	static const int	init_EP = 100;
	static const int	init_DMG = 30;
	
	public:
	
		FragTrap();
		FragTrap( std::string name );
		~FragTrap();
		FragTrap(const FragTrap &obj);
		FragTrap& operator=(const FragTrap &obj);
		
		void attack(const std::string& target);
		void highFivesGuys(void);
};



#endif