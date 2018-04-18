/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 15:45:19 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/02 15:45:21 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.class.hpp"

static void punyOnTheHeap(void)
{
	Pony	*pony = new Pony("Flower", "4", "white");

	std::cout << "Pony on the heap" << std::endl;
	std::cout << "Pony name " << pony->getName();
	std::cout << ", age " << pony->getAge();
	std::cout << ", color " << pony->getColor() << std::endl;
	delete pony;
}
static void punyOnTheStack(void)
{
	Pony	puny("Star", "6", "black");

	std::cout << "Pony on the stack" << std::endl;
	std::cout << "Pony name " << puny.getName();
	std::cout << ", age " << puny.getAge();
	std::cout << ", color " << puny.getColor() << std::endl;
}

int		main(void)
{
	punyOnTheHeap();
	punyOnTheStack();

	return (0);
}

