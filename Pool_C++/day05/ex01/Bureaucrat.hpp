/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 10:20:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/09 10:20:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	Bureaucrat(void);
	Bureaucrat(const std::string & name);
	Bureaucrat(const std::string & name, int grade);
	Bureaucrat(const Bureaucrat & obj);
	~Bureaucrat(void);
	Bureaucrat 	& operator=(const Bureaucrat & obj);

	std::string		getName(void) const;
	int 			getGrade(void) const;
	Bureaucrat 		& incrementGrade(void);
	Bureaucrat		& decrementGrade(void);
	void			singForm(Form & obj);

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(void);
		GradeTooHighException(const GradeTooHighException &);
		~GradeTooHighException(void) throw();
		GradeTooHighException 	& operator=(const GradeTooHighException & obj);
		const char 		* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(void);
		GradeTooLowException(const GradeTooLowException & obj);
		~GradeTooLowException(void) throw();
		GradeTooLowException 	& operator= (const GradeTooLowException & obj);
		const char 		* what() const throw();
	};

private:
	const std::string	_name;
	int 				_grade;
};

std::ostream	& operator<< (std::ostream & out, const Bureaucrat & obj);

#endif