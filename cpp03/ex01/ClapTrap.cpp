/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:23:43 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/29 11:00:20 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _HP(init_HP), _EP(init_EP), _DMG(init_DMG), max_HP(init_HP){
	std::cout << "Creating ClapTrap " << _name << std::endl;
	std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
}

ClapTrap::ClapTrap( void ) : _name("CLA4P-TR"), _HP(init_HP), _EP(init_EP), _DMG(init_DMG), max_HP(init_HP){
	std::cout << "Creating " << _name << std::endl;
	std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
}

ClapTrap::~ClapTrap( void ){
	std::cout << "Destroying " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) : _name(obj._name + "Copy"), _HP(obj._HP), _EP(obj._EP), _DMG(obj._DMG), max_HP(obj.max_HP){
	std::cout << obj._name << " duplicates as " << _name << std::endl;
	std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj){
	this->_name = obj._name;
	this->_DMG = obj._DMG;
	this->_HP = obj._HP;
	this->_EP = obj._EP;
	this->max_HP = obj.max_HP;
	std::cout << this->_name << " is the same as " << obj._name << std::endl;
	std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if (this->_EP > 0 && this->_HP > 0){
		std::cout << "ClapTrap \'" << this->_name;
		std::cout << "\' attacks " << target;
		std::cout << " causing " << this->_DMG << " points of damage" << std::endl;
		this->_EP -= 1;
		std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " unable to perform action" << std::endl;
}

void ClapTrap::takeDamage(unsigned int ammount){
	if (this->_EP > 0 && this->_HP > 0){
		std::cout << this->_name;
		std::cout << " takes " << ammount << " points of damage" << std::endl;
		this->_HP -= ammount;
		if (this->_HP < 0)
			this->_HP = 0;
		std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
	}
	else
		std::cout << this->_name << " lethaly damaged" << std::endl;
}

void ClapTrap::beRepaired(unsigned int ammount){
	
	if (this->_EP > 0 && this->_HP > 0){
		std::cout << this->_name;
		std::cout << "\' repairs himself for " << ammount << " points" << std::endl;
		this->_HP += ammount;
		if (this->_HP > this->max_HP)
			this->_HP = this->max_HP;
		this->_EP -= 1;
		std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
	}
	else
		std::cout << this->_name << " unable to repair" << std::endl;
}

