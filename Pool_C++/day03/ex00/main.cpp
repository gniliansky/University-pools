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

#include "FragTrap.hpp"

int 	main(void)
{
	FragTrap	Union("Union");

	srand(time(NULL));
	Union.rangedAttack("Mr. Bin");
	Union.meleeAttack("Mr. Bin");
	Union.takeDamage(55);
	Union.beRepaired(30);
	Union.beRepaired(30);
	Union.beRepaired(30);
	Union.beRepaired(30);
	Union.vaulthunter_dot_exe("Mr. Bin");
	Union.takeDamage(65);
	Union.takeDamage(65);
	Union.rangedAttack("Mr. Bin");
	Union.meleeAttack("Mr. Bin");
	Union.vaulthunter_dot_exe("Mr. Bin");
	return (0);
}