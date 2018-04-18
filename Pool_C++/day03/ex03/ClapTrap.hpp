/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 10:29:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/06 10:29:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(const std::string name);
	virtual ~ClapTrap();
	ClapTrap(const ClapTrap & obj);
	ClapTrap	& operator=(const ClapTrap & obj);

	virtual void	rangedAttack(std::string const & target) = 0;
	virtual void	meleeAttack(std::string const & target) = 0;
	virtual void	takeDamage(unsigned int amount);
	virtual void	beRepaired(unsigned int amount);

	unsigned int 	getHitPoint(void) const;
	unsigned int 	getMaxHitPoint(void) const;
	unsigned int 	getEnergyPoint(void) const;
	unsigned int 	getMaxEnergyPoint(void) const;
	unsigned int	getLevel(void) const;
	std::string		getName(void) const;
	unsigned int 	getMeleeAttackDamage(void) const;
	unsigned int 	getRangedAttackDamage(void) const;
	unsigned int 	getArmorDamageReduction(void) const;

protected:
	unsigned int	_hitPoint;
	unsigned int	_maxHitPoint;
	unsigned int 	_energyPoint;
	unsigned int 	_maxEnergyPoint;
	unsigned int 	_level;
	std::string		_name;
	unsigned int 	_meleeAttackDamage;
	unsigned int 	_rangedAttackDamage;
	unsigned int 	_armorDamageReduction;

};

#endif
