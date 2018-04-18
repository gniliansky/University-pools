/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 09:30:40 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/12 09:30:42 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int 	main(void)
{
	Array<std::string> a(5);
	a._arr[0] = "Hello world0";
	a._arr[1] = "Hello world1";
	a._arr[2] = "Hello world2";
	a._arr[3] = "Hello world3";
	a._arr[4] = "Hello world4";
	std::cout << a[0] << std::endl;
	std::cout << a[4] << std::endl;

	Array<std::string> b;
	b = a;
	std::cout << b[0] << std::endl;
	std::cout << b[4] << std::endl;

	Array<std::string> c(b);
	std::cout << b[0] << std::endl;
	std::cout << b[4] << std::endl;

	try {
		a[5];
	}
	catch (std::exception & exc) {
		std::cout << "Out of the limits" << std::endl;
	}
	return (0);
}