/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 13:08:20 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/12 13:08:37 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>

int 	main(void)
{
	std::list<int>  lis(4);
	lis.push_back(12);
	lis.push_back(7);
	lis.push_back(8);
	lis.push_back(99);
	std::list<int>::iterator result1 = easyfind(lis, 8);
	std::cout << *result1 << std::endl;

	try {
		std::list<int>::iterator result2 = easyfind(lis, 9);
		std::cout << *result2 << std::endl;
	}
	catch (std::logic_error & error) {
		std::cout << error.what() << std::endl;
	}

	std::vector<int>  vec(4);
	vec.push_back(12);
	vec.push_back(7);
	vec.push_back(8);
	vec.push_back(99);
	std::vector<int>::iterator result3 = easyfind(vec, 8);
	std::cout << *result3 << std::endl;

	try {
		std::vector<int>::iterator result4 = easyfind(vec, 9);
		std::cout << *result4 << std::endl;
	}
	catch (std::logic_error & error) {
		std::cout << error.what() << std::endl;
	}
	return (0);
}