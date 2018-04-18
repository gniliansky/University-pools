/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 13:13:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/05 13:13:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap & obj);
	ScavTrap	& operator=(const ScavTrap & obj);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	unsigned int 	getHitPoint(void) const;
	unsigned int 	getMaxHitPoint(void) const;
	unsigned int 	getEnergyPoint(void) const;
	unsigned int 	getMaxEnergyPoint(void) const;
	unsigned int	getLevel(void) const;
	std::string		getName(void) const;
	unsigned int 	getMeleeAttackDamage(void) const;
	unsigned int 	getRangedAttackDamage(void) const;
	unsigned int 	getArmorDamageReduction(void) const;

	void			challengeNewcomer(std::string const & target);


private:
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
