/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 10:20:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/09 10:20:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat(const std::string & name) : _name(name), _grade(150)
{
	return;
}

Bureaucrat::Bureaucrat(const std::string & name, int grade) : _name(name)
{
	if (grade < 1) {
		throw(GradeTooHighException());
	}
	else if (grade > 150) {
		throw(GradeTooLowException());
	}
	else {
		this->_grade = grade;
	}
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat & obj) : _name(obj.getName()), _grade(obj.getGrade())
{
	return;
}

Bureaucrat::~Bureaucrat(void)
{
	return;
}

Bureaucrat 	& Bureaucrat::operator=(const Bureaucrat & obj)
{
	this->_grade = obj.getGrade();
	return (*this);
}

std::string		Bureaucrat::getName(void) const
{
	return (this->_name);
}

int				Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

Bureaucrat		& Bureaucrat::incrementGrade(void)
{
	if (this->_grade <= 1) {
		throw (GradeTooHighException());
	}
	else {
		this->_grade = this->_grade - 1;
	}
	return (*this);
}

Bureaucrat		& Bureaucrat::decrementGrade(void)
{
	if (this->_grade >= 150) {
		throw (GradeTooLowException());
	}
	else {
		this->_grade = this->_grade + 1;
	}
	return (*this);
}

std::ostream	& operator<< (std::ostream & out, const Bureaucrat & obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}

// 			CLASS GRADE TOO HIGHT EXCEPTION

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
	return;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &)
{
	return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return ;
}

Bureaucrat::GradeTooHighException		& Bureaucrat::GradeTooHighException::operator=(const Bureaucrat::GradeTooHighException &)
{
	return (*this);
}

const char 		*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high ...");
}

// 			CLASS GRADE TOO LOW EXCEPTION

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
	return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &)
{
	return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return ;
}

Bureaucrat::GradeTooLowException		& Bureaucrat::GradeTooLowException::operator=(const Bureaucrat::GradeTooLowException &)
{
	return (*this);
}

const char 		*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low ...");
}