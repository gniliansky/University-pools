/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 10:19:02 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/09 10:19:04 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int 		main(void)
{
	Bureaucrat	obj1("obj 1", 150);
	Bureaucrat	obj2("obj 2", 1);

	try {
		Bureaucrat	obj3("obj 3", 151);
	}
	catch (std::exception & exp) {
		std::cout << exp.what() << std::endl;
	}
	try {
		Bureaucrat	obj4("obj 4", 0);
	}
	catch (std::exception & exp) {
		std::cout << exp.what() << std::endl;
	}
	try {
		obj1.decrementGrade();
	}
	catch (std::exception & exp) {
		std::cout << exp.what() << std::endl;
	}
	try {
		obj2.incrementGrade();
	}
	catch (std::exception & exp) {
		std::cout << exp.what() << std::endl;
	}
	std::cout << obj1 << std::endl;
	std::cout << obj2 << std::endl;

	return (0);
}