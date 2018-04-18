/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 13:13:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/05 13:13:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	return ;
}

ScavTrap::ScavTrap(const std::string name) : _hitPoint(100), _maxHitPoint(100), _energyPoint(50),
											 _maxEnergyPoint(50), _level(1), _name(name), _meleeAttackDamage(20),
											 _rangedAttackDamage(15), _armorDamageReduction(3)
{
	std::cout << "Crazy " << this->_name << " was created !!!" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Crazy " << this->_name << " was destroyed!!!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & obj)
{
	*this = obj;
	return;
}

ScavTrap		& ScavTrap::operator=(const ScavTrap & obj)
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

unsigned int 	ScavTrap::getHitPoint(void) const
{
	return (this->_hitPoint);
}
unsigned int 	ScavTrap::getMaxHitPoint(void) const
{
	return (this->_maxHitPoint);
}
unsigned int 	ScavTrap::getEnergyPoint(void) const
{
	return (this->_energyPoint);
}
unsigned int 	ScavTrap::getMaxEnergyPoint(void) const
{
	return (this->_maxEnergyPoint);
}
unsigned int		ScavTrap::getLevel(void) const
{
	return (this->_level);
}
std::string		ScavTrap::getName(void) const
{
	return (this->_name);
}
unsigned int 	ScavTrap::getMeleeAttackDamage(void) const
{
	return (this->_meleeAttackDamage);
}
unsigned int 	ScavTrap::getRangedAttackDamage(void) const
{
	return (this->_rangedAttackDamage);
}

unsigned int 	ScavTrap::getArmorDamageReduction(void) const
{
	return (this->_armorDamageReduction);
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	if (this->_hitPoint == 0) {
		std::cout << "You died, you will kill him in the next life !!!" << std::endl;
	}
	else {
		std::cout << "Crazy " << this->_name << " strikes " << target;
		std::cout << " with a slingshot, generating " << this->_rangedAttackDamage;
		std::cout << " points of damage " << std::endl;
	}
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	if (this->_hitPoint == 0) {
		std::cout << "You died, you will kill him in the next life !!!" << std::endl;
	}
	else {
		std::cout << "Crazy " << this->_name << " strikes " << target;
		std::cout << " wwith a sword, inducing " << this->_meleeAttackDamage;
		std::cout << " points of damage " << std::endl;
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;

	damage = amount - this->_armorDamageReduction;
	if (this->_hitPoint < damage) {
		this->_hitPoint = 0;
		std::cout << "You kill me !!!" << std::endl;
	}
	else {
		this->_hitPoint -= damage;
		std::cout << "You hit me " << damage << " damage.";
		std::cout << " I have left " << this->_hitPoint << std::endl;;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
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

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string		challenge[] = {
			"I'll kill you ",
			"You are now washing your tears ",
			"You are a corpse ",
			"You will see where the crayfish hibernate ",
			"Kiss my ass "
	};
	int 			index = rand() % 5;

	if (this->_hitPoint == 0) {
		std::cout << "You died, you can not do anything !!!" << std::endl;
		return ;
	}
	if (this->_energyPoint < 25) {
		std::cout << "Not enough energy to call challenge" << std::endl;
	}
	else {
		this->_energyPoint -= 25;
		std::cout << challenge[index] << target << std::endl;
	}
}

