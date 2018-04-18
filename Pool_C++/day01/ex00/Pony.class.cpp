/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 15:46:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/02 15:46:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.class.hpp"

void		Pony::setName(std::string name)
{
	this->_name = name;
}

std::string	Pony::getName(void) const
{
	return (this->_name);
}

void		Pony::setAge(std::string age)
{
	this->_age = age;
}

std::string	Pony::getAge() const
{
	return (this->_age);
}

void		Pony::setColor(std::string color)
{
	this->_color = color;
}

std::string	Pony::getColor() const
{
	return (this->_color);
}

Pony::Pony(std::string name, std::string age, std::string color)
{
	this->_name = name;
	this->_age = age;
	this->_color = color;
}

Pony::~Pony()
{
	std::cout << "Pony " << this->getName() << " die" << std::endl;
}
