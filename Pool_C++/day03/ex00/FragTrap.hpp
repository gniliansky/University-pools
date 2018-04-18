/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 13:13:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/05 13:13:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
public:
	FragTrap();
	FragTrap(const std::string name);
	~FragTrap();
	FragTrap(const FragTrap & obj);
	FragTrap	& operator=(const FragTrap & obj);
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
	unsigned int	getApocalipsisAttackDamage(void) const;
	unsigned int	getWoterAttackDamage(void) const;
	unsigned int	getLazerAttackDamage(void) const;
	unsigned int	getSpaceAttackDamage(void) const;
	unsigned int	getBomberAttackDamage(void) const;
	unsigned int	getVaulHunterDamage(void) const;;

	void 			vaulthunter_dot_exe(std::string const & target);

	void			apocalipsisAttack(std::string const & target);
	void			waterAttack(std::string const &target);
	void			lazerAttack(std::string const & target);
	void			spaceAttack(std::string const & target);
	void			bomberAttack(std::string const & target);


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
	unsigned int	_apocalipsisAttackDamage;
	unsigned int	_waterAttackDamage;
	unsigned int	_lazerAttackDamage;
	unsigned int	_spaceAttackDamage;
	unsigned int	_bomberAttackDamage;
	unsigned int	_vaulHunterDamage;
};

#endif
