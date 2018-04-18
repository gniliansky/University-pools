/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 11:05:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/03/30 11:05:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "megaphone.hpp"

Megaphone::Megaphone(int argv, char **argc)
{
	if (argv == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argv; i++)
			for (int j = 0; argc[i][j]; j++)
			{
				if (argc[i][j] >= 97 && argc[i][j] <= 122)
					std::cout << (char)(argc[i][j] - 32);
				else
					std::cout << argc[i][j];
			}
	}
	std::cout << std::endl;
}