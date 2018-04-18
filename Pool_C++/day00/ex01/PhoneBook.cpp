/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 11:35:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/03/30 11:35:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::idContacts = 0;

PhoneBook::PhoneBook()
{

}

void PhoneBook::add()
{
	Contact *p_contact;

	if (PhoneBook::idContacts == 8)
	{
		std::cout << "The phonebook is full" << std::endl << std::endl;
		return;
	}
	p_contact = &this->contacts[PhoneBook::idContacts];
	p_contact->setIndex(PhoneBook::idContacts);
	p_contact->setFirstName();
	p_contact->setLastName();
	p_contact->setNickname();
	p_contact->setLogin();
	p_contact->setPostalAddress();
	p_contact->setEmailAddress();
	p_contact->setPhoneNumber();
	p_contact->setBirthdayDate();
	p_contact->setFavorite_Meal();
	p_contact->setUnderwear_Color();
	p_contact->setDarkestSecret();
	PhoneBook::idContacts += 1;
	std::cout << "Information saved" << std::endl;
}

void PhoneBook::search() const
{
	if (PhoneBook::idContacts == 0)
	{
		std::cout << "Phone book is empty" << std::endl;
		return ;
	}
	std::cout << "               ~PHONEBOOK~" << std::endl;
	std::cout << std::right;
	std::cout << "|" << std::setw(10)  << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < PhoneBook::idContacts; i++)
	{
		std::cout << "|" << std::setw(10) << contacts[i].getIndex() << "|";
		std::cout << std::setw(10) << PhoneBook::cutString(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << PhoneBook::cutString(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << PhoneBook::cutString(contacts[i].getNickname()) << "|" << std::endl;
	}
	this->printContact();
}

std::string PhoneBook::cutString(std::string line)
{
	if (line.size() > 10)
	{
		line.erase(line.begin() + 10, line.end());
		line[9] = '.';
	}
	return (line);
}

void			PhoneBook::printContact() const
{
	int index;
	std::string ptrStr;

	while (1) {
		std::cout << "Chouce index for more information and press enter: ";
		if (std::cin.peek() == EOF)
			exit(1);
		std::getline(std::cin, ptrStr);
		if (ptrStr.size() == 1){
			index = (int)(ptrStr[0] - '0');
			if ((index >= 0 && index < PhoneBook::idContacts)) {
				break;
			}
		}
		std::cout << "Wrong index" << std::endl;
	}
	std::cout << this->contacts[index].getFirstName() << std::endl;
	std::cout << this->contacts[index].getLastName() << std::endl;
	std::cout << this->contacts[index].getNickname() << std::endl;
	std::cout << this->contacts[index].getLogin() << std::endl;
	std::cout << this->contacts[index].getPostalAddress() << std::endl;
	std::cout << this->contacts[index].getEmailAddress() << std::endl;
	std::cout << this->contacts[index].getPhoneNumber() << std::endl;
	std::cout << this->contacts[index].getBirthdayDate() << std::endl;
	std::cout << this->contacts[index].getFavorite_Meal() << std::endl;
	std::cout << this->contacts[index].getUnderwear_Color() << std::endl;
	std::cout << this->contacts[index].getDarkestSecret() << std::endl;
}