/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 14:11:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/10 14:11:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern(void);
	Intern(const Intern & intern);
	~Intern(void);
	Intern		& operator=(const Intern & intern);

	Form 	* makeForm(const std::string & formName, const std::string & formTarget);
	Form	* robotomy(const std::string & formTarget);
	Form	* shrubbery(const std::string & formTarget);
	Form	* presidential(const std::string & formTarget);
private:


};


#endif
