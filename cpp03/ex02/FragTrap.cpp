/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 11:05:20 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/29 11:06:28 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(): ClapTrap("Scavvy"){
	this->_HP = this->init_HP;
	this->_EP = this->init_EP;
	this->_DMG = this->init_DMG;
	this->max_HP = init_HP;
	std::cout << _name << " has updated to FragTrap" << std::endl;
	std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name){
	this->_name = name;
	this->_HP = this->init_HP;
	this->_EP = this->init_EP;
	this->_DMG = this->init_DMG;
	this->max_HP = init_HP;
	std::cout << "FragTrap " << _name << " has appeared" << std::endl;
	std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->_name << " has been destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj): ClapTrap(obj._name){
	this->_name = obj._name + "Copy";
	this->_HP = obj._HP;
	this->_EP = obj._EP;
	this->_DMG = obj._DMG;
	this->max_HP = obj.max_HP;
	std::cout << obj._name << " duplicates as " << _name << std::endl;
	std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
	
}

FragTrap& FragTrap::operator=(const FragTrap &obj){
	this->_name = obj._name;
	this->_DMG = obj._DMG;
	this->_HP = obj._HP;
	this->_EP = obj._EP;
	this->max_HP = obj.max_HP;
	std::cout << this->_name << " is the same as " << obj._name << std::endl;
	std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
	return *this;
}

void FragTrap::attack(const std::string& target){
	if (this->_EP > 0 && this->_HP > 0){
		std::cout << "FragTrap \'" << this->_name;
		std::cout << "\' attacks " << target;
		std::cout << " causing " << this->_DMG << " points of damage" << std::endl;
			this->_EP -= 1;
		std::cout << "HP " << this->_HP << " EP " << this->_EP << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " unable to attack" << std::endl;
}

void FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << this->_name << " gives a huge high five " << std::endl;
}