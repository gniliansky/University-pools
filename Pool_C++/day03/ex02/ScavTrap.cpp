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

ScavTrap::ScavTrap(void) : ClapTrap::ClapTrap("default")
{
	return ;
}

ScavTrap::ScavTrap(const std::string name)
{
	this->_hitPoint = 100;
	this->_maxHitPoint = 100;
	this->_energyPoint = 50;
	this->_maxEnergyPoint = 50;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	this->_level = 1;
	this->_name = name;

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