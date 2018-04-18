/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 20:30:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/09 20:30:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(const std::string & target);
	PresidentialPardonForm(const PresidentialPardonForm & obj);
	~PresidentialPardonForm(void);
	PresidentialPardonForm 	& operator=(const PresidentialPardonForm  & obj);

	std::string		getTarget(void) const;

	void 		execute(Bureaucrat const & executor) const;

public:
	std::string		_target;
};


#endif
