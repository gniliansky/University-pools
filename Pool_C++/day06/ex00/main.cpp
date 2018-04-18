/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 16:07:15 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/11 16:07:18 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int 	main(int argc, char ** argv)
{
	static_cast<void>(argv);
	if (argc != 2) {
		std::cout << "Usage: ./convert [param]" << std::endl;
	}
	return (0);
}
