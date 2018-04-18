/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 09:33:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/03 09:33:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
	return;
}

Zombie::Zombie(void) : _name("default_name"), _type("default_type")
{
	std::cout << "Zombie created" << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie destroyed" << std::endl;
	return;
}

std::string		Zombie::announce() const
{
	std::string		message;

	message = "<" + this->_name + "(" + this->_type + ")> ";
	message += "Braiiiiiiinnnssss...";
	return (message);
}

void			Zombie::setName(std::string name)
{
	this->_name = name;
}

void 			Zombie::setType(std::string type)
{
	this->_type = type;
}