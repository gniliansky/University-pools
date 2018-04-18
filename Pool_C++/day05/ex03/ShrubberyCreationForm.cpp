/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 10:47:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/10 10:47:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form ("ShrubberyCreationForm", 145, 137)
{
	this->_target = "default";
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) :
		Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & form)
{
	Form::operator=(form);
	this->_target = form.getTarget();
	return ;
}

ShrubberyCreationForm  & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &)
{
	return (*this);
}

std::string		ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSign()) {
		throw (NotSignedException());
	}
	else if (executor.getGrade() > this->getGradeExecute()) {
		throw (GradeTooLowException());
	}
	std::ofstream fout;
	fout.open((this->getTarget() + "_shrubbery"));
	fout << "      x/\\$" << std::endl;
	fout << "     $/\\/\\." << std::endl;
	fout << "    ./\\/\\/\\+" << std::endl;
	fout << "   +/\\/\\/\\/\\o" << std::endl;
	fout << "  o/\\/\\/\\/\\/\\O" << std::endl;
	fout << " O/\\/\\/\\/\\/\\/\\+" << std::endl;
	fout << "+/\\/\\/\\/\\/\\/\\/\\o" << std::endl;
	fout << "      /\\/\\" << std::endl;
}
