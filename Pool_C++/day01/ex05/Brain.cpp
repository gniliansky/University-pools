/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 12:50:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/03 12:50:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	return;
}

Brain::~Brain(void)
{
	return;
}

std::string		Brain::identify(void) const
{
	std::stringstream		result;

	result << this;
	return (result.str());
}