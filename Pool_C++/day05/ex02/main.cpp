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

class PresidentialPardonForm;

int 		main(void)
{
	srand(time(NULL));
	Bureaucrat	bur("Bureaucrat6", 6);
	PresidentialPardonForm		president_form1("president_form1");
	bur.singForm(president_form1);
	bur.executeForm(president_form1);
	bur.incrementGrade();
	bur.executeForm(president_form1);

	std::cout << std::endl;

	Bureaucrat bur2("Bureaucrat45", 45);
	RobotomyRequestForm rob("Robot_form1");
	bur2.singForm(rob);
	bur2.executeForm(rob);

	std::cout << std::endl;

	Bureaucrat bur3("Bureaucrat135", 135);
	ShrubberyCreationForm shr	("Shrubbery_form1");
	bur3.executeForm(shr);
	bur3.singForm(shr);
	bur3.executeForm(shr);

	std::cout << std::endl;

	Bureaucrat bur4("Bureaucrat138", 138);
	ShrubberyCreationForm shr2	("Shrubbery_form2");
	bur4.singForm(shr2);
	bur4.executeForm(shr2);

	std::cout << std::endl;

	Bureaucrat bur5("Bureaucrat146", 146);
	ShrubberyCreationForm shr3	("Shrubbery_form3");
	bur5.singForm(shr3);
	bur5.executeForm(shr3);
	return (0);
}