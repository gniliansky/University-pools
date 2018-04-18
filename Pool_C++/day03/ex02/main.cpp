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

int 	main(void)
{
	ScavTrap	Crazy("Bob");
	FragTrap 	Union("Mr. Bin");

	srand(time(NULL));

	Crazy.challengeNewcomer(Union.getName());
	Union.meleeAttack(Crazy.getName());
	Crazy.takeDamage(Union.getMeleeAttackDamage());
	Crazy.rangedAttack(Union.getName());
	Union.takeDamage(Crazy.getRangedAttackDamage());
	Union.beRepaired(220);
	Crazy.challengeNewcomer(Union.getName());
	Union.vaulthunter_dot_exe(Crazy.getName());
	Crazy.takeDamage(Union.getVaulHunterDamage());
	Crazy.challengeNewcomer(Union.getName());
	Union.vaulthunter_dot_exe(Crazy.getName());
	Crazy.takeDamage(Union.getVaulHunterDamage());
	return (0);
}