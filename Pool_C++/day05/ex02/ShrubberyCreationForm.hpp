/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 10:47:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/10 10:47:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EX00_SHRUBBERYCREATIONFORM_HPP
#define EX00_SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "fstream"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(const std::string & target);
	ShrubberyCreationForm(const ShrubberyCreationForm & obj);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm 	& operator=(const ShrubberyCreationForm  & obj);

	std::string		getTarget(void) const;

	void 		execute(Bureaucrat const & executor) const;

public:
	std::string		_target;
};


#endif
