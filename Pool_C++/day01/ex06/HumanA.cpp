/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:35:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/03 14:35:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :_weapon(weapon), _name(name)
{
	return ;
}

void		HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType();
	std::cout << std::endl;
	return;
}