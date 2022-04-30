/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:12:53 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/29 10:59:54 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(): ClapTrap("Scavvy"){
	this->_HP = this->init_HP;
	this->_EP = this->init_EP;
	this->_DMG = this->init_DMG;
	this->max_HP = init_HP;
	std::cout << _name << " has updated to ScavTrap" << std::endl;
	std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(name){
	this->_name = name;
	this->_HP = this->init_HP;
	this->_EP = this->init_EP;
	this->_DMG = this->init_DMG;
	this->max_HP = init_HP;
	std::cout << "ScavTrap " << _name << " has appeared" << std::endl;
	std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->_name << " has been destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj): ClapTrap(obj._name){
	this->_name = obj._name + "Copy";
	this->_HP = obj._HP;
	this->_EP = obj._EP;
	this->_DMG = obj._DMG;
	this->max_HP = obj.max_HP;
	std::cout << obj._name << " duplicates as " << _name << std::endl;
	std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
	
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj){
	this->_name = obj._name;
	this->_DMG = obj._DMG;
	this->_HP = obj._HP;
	this->_EP = obj._EP;
	this->max_HP = obj.max_HP;
	std::cout << this->_name << " is the same as " << obj._name << std::endl;
	std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string& target){
	if (this->_EP > 0 && this->_HP > 0){
		std::cout << "ScavTrap \'" << this->_name;
		std::cout << "\' attacks " << target;
		std::cout << " causing " << this->_DMG << " points of damage" << std::endl;
			this->_EP -= 1;
		std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " unable to attack" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->_name << " is guarding the gate with his mighty power" << std::endl;
}