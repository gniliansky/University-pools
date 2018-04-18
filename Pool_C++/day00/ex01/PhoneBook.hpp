/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 11:35:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/03/30 11:35:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"
#include <iomanip>

class PhoneBook
{
private:
	static int		idContacts;
	Contact			contacts[8];
	static std::string cutString(std::string line);
	void			printContact() const;

public:
	PhoneBook();
	void add();
	void search() const;
};


#endif
