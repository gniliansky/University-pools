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
	Bureaucrat	bur("Bureaucrat", 54);
	Form		form1("form1", 54, 43);
	Form		form2("form2", 53, 53);

	try {
		Form	form3("form3", 55, 153);
	}
	catch (std::exception & exp) {
		std::cout << exp.what() << std::endl;
	}
	try {
		Form	form4("form4", 155, 15);
	}
	catch (std::exception & exp) {
		std::cout << exp.what() << std::endl;
	}
	try {
		Form	form5("form5", 143, 0);
	}
	catch (std::exception & exp) {
		std::cout << exp.what() << std::endl;
	}
	try {
		Form	form6("form6", 0, 15);
	}
	catch (std::exception & exp) {
		std::cout << exp.what() << std::endl;
	}
	bur.singForm(form1);
	bur.singForm(form2);
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;

	return (0);
}