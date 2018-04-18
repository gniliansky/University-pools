/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 10:29:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/06 10:29:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Abstract ClapTrap class (default) constructor called!!!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const std::string name)
{
	this->_hitPoint = 100;
	this->_maxHitPoint = 100;
	this->_energyPoint = 0;
	this->_maxEnergyPoint = 0;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 0;
	this->_rangedAttackDamage = 0;
	this->_armorDamageReduction = 0;
	std::cout << "Abstract ClapTrap class constructor called!!!" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Abstract ClapTrap class destructor called!!!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & obj)
{
	*this = obj;
	return;
}

ClapTrap		& ClapTrap::operator=(const ClapTrap & obj)
{
	this->_hitPoint = obj.getHitPoint();
	this->_maxHitPoint = obj.getMaxHitPoint();
	this->_energyPoint = obj.getEnergyPoint();
	this->_maxEnergyPoint = obj.getMaxEnergyPoint();
	this->_level = obj.getLevel();
	this->_name = obj.getName();
	this->_meleeAttackDamage = obj.getMeleeAttackDamage();
	this->_rangedAttackDamage = obj.getRangedAttackDamage();
	this->_armorDamageReduction = obj.getArmorDamageReduction();
	return (*this);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;

	damage = amount - this->_armorDamageReduction;
	if (this->_hitPoint < damage) {
		std::cout << "You kill me !!!" << std::endl;
	}
	else {
		this->_hitPoint -= damage;
		std::cout << "You hit me " << damage << " damage.";
		std::cout << " I have left " << this->_hitPoint << std::endl;;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > this->_maxHitPoint) {
		this->_hitPoint = this->_maxHitPoint;
	}
	else {
		this->_hitPoint += amount;
		if (this->_hitPoint > this->_maxHitPoint) {
			this->_hitPoint = this->_maxHitPoint;
		}
	}
	std::cout << "I have been repaired and now have " << this->_hitPoint;
	std::cout << " hit points" << std::endl;
}

unsigned int 	ClapTrap::getHitPoint(void) const
{
	return (this->_hitPoint);
}
unsigned int 	ClapTrap::getMaxHitPoint(void) const
{
	return (this->_maxHitPoint);
}
unsigned int 	ClapTrap::getEnergyPoint(void) const
{
	return (this->_energyPoint);
}
unsigned int 	ClapTrap::getMaxEnergyPoint(void) const
{
	return (this->_maxEnergyPoint);
}
unsigned int		ClapTrap::getLevel(void) const
{
	return (this->_level);
}
std::string		ClapTrap::getName(void) const
{
	return (this->_name);
}
unsigned int 	ClapTrap::getMeleeAttackDamage(void) const
{
	return (this->_meleeAttackDamage);
}
unsigned int 	ClapTrap::getRangedAttackDamage(void) const
{
	return (this->_rangedAttackDamage);
}

unsigned int 	ClapTrap::getArmorDamageReduction(void) const
{
	return (this->_armorDamageReduction);
}