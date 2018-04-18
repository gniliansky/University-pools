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
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
class PresidentialPardonForm;


int 		main(void)
{
	Intern	in;
	Form * f1 = in.makeForm("robotomy request" , "Home");
	std::cout << *f1 << std::endl;

	std::cout << std::endl;

	Form * f2 = in.makeForm("shrubbery request" , "Work");
	std::cout << *f2 << std::endl;

	std::cout << std::endl;

	Form * f3 = in.makeForm("presidential request" , "School");
	std::cout << *f3 << std::endl;

	std::cout << std::endl;

	in.makeForm("error request" , "error");

	delete f1;
	delete f2;
	delete f3;
	return (0);
}