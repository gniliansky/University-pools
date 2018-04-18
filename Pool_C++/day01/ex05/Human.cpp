/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 12:50:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/03 12:50:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	return;
}

Human::~Human(void)
{
	return;
}

std::string		Human::identify(void) const
{
	return (this->_braine.identify());
}

const Brain			&Human::getBrain(void)
{
	return (this->_braine);
}
