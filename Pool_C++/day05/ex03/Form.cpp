/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 15:22:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/09 15:22:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("default"), _sign(false),
				   _gradeRequired(1) , _gradeExecute(1)
{
	return ;
}

Form::Form(const Form & obj) : _name(obj.getName()), _sign(obj.getSign()),
							   _gradeRequired(obj.getGradeRequired()),
							   _gradeExecute(obj.getGradeExecute())
{
	return ;
}

Form::Form(const std::string & name, int gradeReqired, int gradeExecute) :
						_name(name),_gradeRequired(gradeReqired),
						_gradeExecute(gradeExecute)
{
	if (gradeExecute < 1 || gradeReqired < 1) {
		throw (GradeTooHighException());
	}
	if (gradeExecute > 150 || gradeReqired > 150) {
		throw (GradeTooLowException());
	}
	this->_sign = false;
	return ;
}

Form::~Form(void)
{
	return ;
}

Form		& Form::operator=(const Form & form)
{
	this->_sign = form.getSign();
	return (*this);
}

const std::string		Form::getName(void) const
{
	return (this->_name);
}

bool					Form::getSign(void) const
{
	return (this->_sign);
}

int 				Form::getGradeRequired(void) const
{
	return (this->_gradeRequired);
}

int 				Form::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}

void					Form::beSigned(const Bureaucrat & obj)
{
	if (obj.getGrade() > this->_gradeRequired) {
		throw(GradeTooLowException());
	}
	this->_sign = true;
	return ;
}

std::ostream 	& operator<< (std::ostream & out, const Form & obj)
{
	out << "The form: " << obj.getName() << " which is ";
 	out << (obj.getSign() ? "" : "not ");
	out << " signed, which requires a grade " << obj.getGradeRequired();
	out << " to sign, and " << obj.getGradeExecute() << " to be executed.";
	return (out);
}

// 			CLASS GRADE TOO HIGHT EXCEPTION

Form::GradeTooHighException::GradeTooHighException(void)
{
	return;
}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &)
{
	return;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
	return ;
}

Form::GradeTooHighException		& Form::GradeTooHighException::operator=(const Form::GradeTooHighException &)
{
	return (*this);
}

const char 		*Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high ...");
}

// 			CLASS GRADE TOO LOW EXCEPTION

Form::GradeTooLowException::GradeTooLowException(void)
{
	return;
}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &)
{
	return;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
	return ;
}

Form::GradeTooLowException		& Form::GradeTooLowException::operator=(const Form::GradeTooLowException &)
{
	return (*this);
}

const char 		*Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low ...");
}

//			CLASS NOT SIGNED EXCEPTION

Form::NotSignedException::NotSignedException(void)
{
	return ;
}

Form::NotSignedException::NotSignedException(const NotSignedException & src)
{
	*this = src;
	return ;
}

Form::NotSignedException::~NotSignedException(void) throw()
{
	return ;
}

Form::NotSignedException  &Form::NotSignedException::operator= (const NotSignedException &)
{
	return (*this);
}

const char* Form::NotSignedException::what(void) const throw()
{
	return ("Form not signed, yet");
}