/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 15:22:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/09 15:22:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _sign;
	const int _gradeRequired;
	const int _gradeExecute;

public:
	Form(void);
	Form(const Form &obj);
	Form(const std::string & name, int gradeRequired, int gradeExecute);
	~Form(void);
	Form &operator=(const Form &obj);

	const std::string getName(void) const;
	bool 		getSign(void) const;
	int 	getGradeRequired(void) const;
	int 	getGradeExecute(void) const;
	void 		beSigned(const Bureaucrat &obj);
	virtual void execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(void);
		GradeTooHighException(const GradeTooHighException & obj);
		~GradeTooHighException(void) throw();
		GradeTooHighException	& operator= (const GradeTooHighException & obj);
		const char 		* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(void);
		GradeTooLowException(const GradeTooLowException & obj);
		~GradeTooLowException(void) throw();
		GradeTooLowException	& operator= (const GradeTooLowException & obj);
		const char 		* what() const throw();
	};

	class NotSignedException : public std::exception
	{
	public:
		NotSignedException(void);
		NotSignedException(const NotSignedException &src);
		virtual ~NotSignedException(void) throw();
		NotSignedException    &operator= (const NotSignedException &rhs);

		virtual const char    *what(void) const throw();
	};


};

std::ostream	& operator<< (std::ostream & out, const Form & obj);

#endif
