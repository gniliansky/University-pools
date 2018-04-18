/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 13:13:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/05 13:13:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap::ClapTrap("default")
{
	return ;
}

FragTrap::FragTrap(const std::string name) :  _apocalipsisAttackDamage(999), _waterAttackDamage(15),
											  _lazerAttackDamage(230), _spaceAttackDamage(45),
											 _bomberAttackDamage(20), _vaulHunterDamage(0)
{
	this->_hitPoint = 100;
	this->_maxHitPoint = 100;
	this->_energyPoint = 100;
	this->_maxEnergyPoint = 100;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	this->_name = name;
	this->_level = 1;
	std::cout << this->_name << " has appeared from nowhere !!!" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << this->_name << " gone nowhere !!!" << std::endl;
}

FragTrap::FragTrap(const FragTrap & obj)
{
	*this = obj;
	return;
}

FragTrap		& FragTrap::operator=(const FragTrap & obj)
{
	this->_hitPoint = obj.getHitPoint();
	this->_maxHitPoint = obj.getMaxHitPoint();
	this->_energyPoint = obj.getEnergyPoint();
	this->_maxEnergyPoint = obj.getMaxEnergyPoint();
	this->_level = obj.getLevel();
	this->_name = obj.getName();
	this->_meleeAttackDamage = obj.getMeleeAttackDamage();
	this->_rangedAttackDamage = obj.getRangedAttackDamage();
	this->_armorDamageReduction = getArmorDamageReduction();
	this->_apocalipsisAttackDamage = obj.getApocalipsisAttackDamage();
	this->_waterAttackDamage = obj.getWoterAttackDamage();
	this->_lazerAttackDamage = obj.getLazerAttackDamage();
	this->_spaceAttackDamage = obj.getSpaceAttackDamage();
	this->_bomberAttackDamage = obj.getBomberAttackDamage();
	this->_vaulHunterDamage = obj.getVaulHunterDamage();
	return (*this);
}

unsigned int	FragTrap::getApocalipsisAttackDamage(void) const
{
	return (this->_apocalipsisAttackDamage);
}

unsigned int	FragTrap::getWoterAttackDamage(void) const
{
	return (this->_waterAttackDamage);
}

unsigned int	FragTrap::getLazerAttackDamage(void) const
{
	return (this->_lazerAttackDamage);
}
unsigned int	FragTrap::getSpaceAttackDamage(void) const
{
	return (this->_spaceAttackDamage);
}
unsigned int	FragTrap::getBomberAttackDamage(void) const
{
	return (this->_bomberAttackDamage);
}
unsigned int	FragTrap::getVaulHunterDamage(void) const
{
	return (this->_vaulHunterDamage);
}

void	FragTrap::rangedAttack(std::string const & target)
{
	if (this->_hitPoint == 0) {
		std::cout << "You died, you can not fight !!!" << std::endl;
	}
	else {
		std::cout << "FR4G-TP " << this->_name << " attacks " << target;
		std::cout << " at range, causing " << this->_rangedAttackDamage;
		std::cout << " points of damage " << std::endl;
	}
}

void	FragTrap::meleeAttack(std::string const & target)
{
	if (this->_hitPoint == 0) {
		std::cout << "You died, you can not fight !!!" << std::endl;
	}
	else {
		std::cout << "FR4G-TP " << this->_name << " attacks " << target;
		std::cout << " at melee, causing " << this->_meleeAttackDamage;
		std::cout << " points of damage " << std::endl;
	}
}



void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->_energyPoint < 25) {
		std::cout << "Not enough energy to attack" << std::endl;
	}
	else {
		this->_energyPoint -= 25;
		switch (rand() % 5) {
			case 0:
				apocalipsisAttack(target);
				break;
			case 1:
				waterAttack(target);
				break;
			case 2:
				lazerAttack(target);
				break;
			case 3:
				spaceAttack(target);
				break;
			case 4:
				bomberAttack(target);
				break;
		}
	}

}

void	FragTrap::apocalipsisAttack(std::string const & target)
{
	if (this->_hitPoint == 0) {
		std::cout << "You died, you can not fight !!!" << std::endl;
	}
	else {
		this->_vaulHunterDamage = _apocalipsisAttackDamage;
		std::cout << "FR4G-TP " << this->_name << " attacks " << target;
		std::cout << " at apocalipsis, causing " << this->_apocalipsisAttackDamage;
		std::cout << " points of damage " << std::endl;
	}
}
void	FragTrap::waterAttack(std::string const &target)
{
	if (this->_hitPoint == 0) {
		std::cout << "You died, you can not fight !!!" << std::endl;
	}
	else {
		this->_vaulHunterDamage = _waterAttackDamage;
		std::cout << "FR4G-TP " << this->_name << " attacks " << target;
		std::cout << " at woter, causing " << this->_waterAttackDamage;
		std::cout << " points of damage " << std::endl;
	}
}
void	FragTrap::lazerAttack(std::string const & target)
{
	if (this->_hitPoint == 0) {
		std::cout << "You died, you can not fight !!!" << std::endl;
	}
	else {
		this->_vaulHunterDamage = _lazerAttackDamage;
		std::cout << "FR4G-TP " << this->_name << " attacks " << target;
		std::cout << " with a lazer, causing " << this->_lazerAttackDamage;
		std::cout << " points of damage " << std::endl;
	}
}
void	FragTrap::spaceAttack(std::string const & target)
{
	if (this->_hitPoint == 0) {
		std::cout << "You died, you can not fight !!!" << std::endl;
	}
	else {
		this->_vaulHunterDamage = _spaceAttackDamage;
		std::cout << "FR4G-TP " << this->_name << " attacks " << target;
		std::cout << " at space, causing " << this->_spaceAttackDamage;
		std::cout << " points of damage " << std::endl;
	}
}
void	FragTrap::bomberAttack(std::string const & target)
{
	if (this->_hitPoint == 0) {
		std::cout << "You died, you can not fight !!!" << std::endl;
	}
	else {
		this->_vaulHunterDamage = _bomberAttackDamage;
		std::cout << "FR4G-TP " << this->_name << " attacks " << target;
		std::cout << " with a bomber, causing " << this->_bomberAttackDamage;
		std::cout << " points of damage " << std::endl;
	}
}
