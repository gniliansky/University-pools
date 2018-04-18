/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 10:01:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/10 10:01:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form ("RobotomyRequestForm", 72, 45)
{
	this->_target = "default";
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) :
				Form("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &)
{
	return ;
}

RobotomyRequestForm  & RobotomyRequestForm::operator=(const RobotomyRequestForm & form)
{
	Form::operator=(form);
	this->_target = form.getTarget();
	return (*this);
}

std::string		RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSign()) {
		throw (NotSignedException());
	}
	else if (executor.getGrade() > this->getGradeExecute()) {
		throw (GradeTooLowException());
	}
	if (rand() % 2) {
		std::cout << "Drilling noises, " << this->getName();
		std::cout << " has been robotomized successfully" << std::endl;
	}
	else {
		std::cout << this->getName() << " has been failure" << std::endl;
	}
}