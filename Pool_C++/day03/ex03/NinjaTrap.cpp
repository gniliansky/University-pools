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

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap::ClapTrap("default")
{
	return ;
}

NinjaTrap::NinjaTrap(const std::string name)
{
	this->_hitPoint = 60;
	this->_maxHitPoint = 60;
	this->_energyPoint = 120;
	this->_maxEnergyPoint = 120;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	this->_level = 1;
	this->_name = name;

	std::cout << "Ninja " << this->_name << " was created !!!" << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Ninja " << this->_name << " was destroyed!!!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap & obj)
{
	*this = obj;
	return;
}

NinjaTrap		& NinjaTrap::operator=(const NinjaTrap & obj)
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


void	NinjaTrap::rangedAttack(std::string const & target)
{
	if (this->_hitPoint == 0) {
		std::cout << "You died, it is over !!!" << std::endl;
	}
	else {
		std::cout << "Ninja " << this->_name << " strikes " << target;
		std::cout << " with a archery, hurt " << this->_rangedAttackDamage;
		std::cout << " points of damage " << std::endl;
	}
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	if (this->_hitPoint == 0) {
		std::cout << "You died, it is over !!!" << std::endl;
	}
	else {
		std::cout << "Ninja " << this->_name << " strikes " << target;
		std::cout << " with a Nunchaku, hurt " << this->_meleeAttackDamage;
		std::cout << " points of damage " << std::endl;
	}
}

void NinjaTrap::ninjaShoebox(ScavTrap& scav)
{
	std::cout << this->_name << ": I will eat you, " \
			<< scav.getName() << "... I think you are very tasty" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap& frag)
{
	std::cout << this->_name << ": You are stupid, " \
				<< frag.getName() << "?" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap& ninja)
{
	std::cout << this->_name << ": I NINJA... kamikaze. Goodyeeeeeee ...., "\
	 			<< ninja.getName() << std::endl;
}