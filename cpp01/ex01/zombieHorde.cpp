/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 08:30:24 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/25 08:58:18 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++){
		horde[i].set_name(name);
		horde[i].announce();
	}
	return horde;
}