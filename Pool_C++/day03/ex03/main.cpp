/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 13:12:36 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/05 13:12:39 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

int 	main(void)
{
	ScavTrap	Crazy("Bob");
	FragTrap 	Union("Mr. Bin");
	NinjaTrap	Ninja("Cocos");

	srand(time(NULL));

	Crazy.challengeNewcomer(Union.getName());
	Union.meleeAttack(Crazy.getName());
	Ninja.ninjaShoebox(Crazy);
	Crazy.takeDamage(Union.getMeleeAttackDamage());
	Crazy.rangedAttack(Union.getName());
	Union.takeDamage(Crazy.getRangedAttackDamage());
	Union.beRepaired(220);
	Crazy.challengeNewcomer(Union.getName());
	Union.vaulthunter_dot_exe(Crazy.getName());
	Ninja.ninjaShoebox(Union);
	Crazy.takeDamage(Union.getVaulHunterDamage());
	Crazy.challengeNewcomer(Union.getName());
	Union.vaulthunter_dot_exe(Crazy.getName());
	Crazy.takeDamage(Union.getVaulHunterDamage());
	Ninja.ninjaShoebox(Ninja);
	return (0);
}