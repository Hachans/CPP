/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:23:43 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/29 09:27:43 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

static const int init_HP = 10;
static const int init_EP = 10;
static const int init_DMG = 0;

ClapTrap::ClapTrap( std::string name ) : _name(name), _HP(init_HP), _EP(init_EP), _DMG(init_DMG){
	std::cout << "Creating " << _name << std::endl;
}

ClapTrap::ClapTrap( void ) : _name("CLA4P-TR"), _HP(init_HP), _EP(init_EP), _DMG(init_DMG){
	std::cout << "Creating " << _name << std::endl;
}

ClapTrap::~ClapTrap( void ){
	std::cout << "Destroying " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) : _name(obj._name + "Copy"), _HP(obj._HP), _EP(obj._EP), _DMG(obj._DMG){
	std::cout << obj._name << " duplicates as " << _name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj){
	this->_name = obj._name;
	this->_DMG = obj._DMG;
	this->_HP = obj._HP;
	this->_EP = obj._EP;
	std::cout << this->_name << " is the same as " << obj._name << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if (this->_EP > 0 && this->_HP > 0){
		std::cout << "ClapTrap \'" << this->_name;
		std::cout << "\' attacks " << target;
		std::cout << " causing " << this->_DMG << " points of damage" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " unable to perform action" << std::endl;
}

void ClapTrap::takeDamage(unsigned int ammount){
	if (this->_EP > 0 && this->_HP > 0){
		std::cout << "ClapTrap \'" << this->_name;
		std::cout << "\' takes " << ammount << " points of damage" << std::endl;
		this->_HP -= ammount;
		if (this->_HP < 0)
			this->_HP = 0;
		std::cout << "HP " << this->_HP << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " unable to perform action" << std::endl;
}

void ClapTrap::beRepaired(unsigned int ammount){
	
	if (this->_EP > 0 && this->_HP > 0){
		std::cout << "ClapTrap \'" << this->_name;
		std::cout << "\' repairs himself for " << ammount << " points" << std::endl;
		this->_HP += ammount;
		if (this->_HP > init_HP)
			this->_HP = init_HP;
		this->_EP -= 1;
		std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
			
	}
	else
		std::cout << "ClapTrap " << this->_name << " unable to perform action" << std::endl;
}

