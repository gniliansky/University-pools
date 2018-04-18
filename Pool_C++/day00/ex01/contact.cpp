/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 12:09:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/03/30 12:09:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{

}

void			Contact::setIndex(int index)
{
	this->index = index;
}

int				Contact::getIndex() const
{
	return (this->index);
}

void 			Contact::setFirstName()
{
	std::cout << "Enter first name" << std::endl;
	if (std::cin.peek() == EOF)
		exit(1);
	std::getline(std::cin, this->firstName);
}

std::string		Contact::getFirstName() const
{
	return (this->firstName);
}

void 			Contact::setLastName()
{
	std::cout << "Enter last name" << std::endl;
	if (std::cin.peek() == EOF)
		exit(1);
	std::getline(std::cin, this->lastName);
}

std::string		Contact::getLastName() const
{
	return (this->lastName);
}

void 			Contact::setNickname()
{
	std::cout << "Enter nickname" << std::endl;
	if (std::cin.peek() == EOF)
		exit(1);
	std::getline(std::cin, this->nickname);
}

std::string		Contact::getNickname() const
{
	return (this->nickname);
}

void 			Contact::setLogin()
{
	std::cout << "Enter login" << std::endl;
	if (std::cin.peek() == EOF)
		exit(1);
	std::getline(std::cin, this->login);
}

std::string		Contact::getLogin() const
{
	return (this->login);
}

void 			Contact::setPostalAddress()
{
	std::cout << "Enter postal address" << std::endl;
	if (std::cin.peek() == EOF)
		exit(1);
	std::getline(std::cin, this->postalAddress);
}

std::string		Contact::getPostalAddress() const
{
	return (this->postalAddress);
}

void 			Contact::setEmailAddress()
{
	std::cout << "Enter email address" << std::endl;
	if (std::cin.peek() == EOF)
		exit(1);
	std::getline(std::cin, this->emailAddress);
}

std::string		Contact::getEmailAddress() const
{
	return (this->emailAddress);
}

void 			Contact::setPhoneNumber()
{
	std::cout << "Enter phone number" << std::endl;
	if (std::cin.peek() == EOF)
		exit(1);
	std::getline(std::cin, this->phoneNumber);
}

std::string		Contact::getPhoneNumber() const
{
	return (this->phoneNumber);
}

void 			Contact::setBirthdayDate()
{
	std::cout << "Enter birthday date" << std::endl;
	if (std::cin.peek() == EOF)
		exit(1);
	std::getline(std::cin, this->birthdayDate);
}

std::string		Contact::getBirthdayDate() const
{
	return (this->birthdayDate);
}

void 			Contact::setFavorite_Meal()
{
	std::cout << "Enter favorite meal" << std::endl;
	if (std::cin.peek() == EOF)
		exit(1);
	std::getline(std::cin, this->favorite_Meal);
}

std::string		Contact::getFavorite_Meal() const
{
	return (this->favorite_Meal);
}

void 			Contact::setUnderwear_Color()
{
	std::cout << "Enter underwear color" << std::endl;
	if (std::cin.peek() == EOF)
		exit(1);
	std::getline(std::cin, this->underwearColor);
}

std::string		Contact::getUnderwear_Color() const
{
	return (this->underwearColor);
}

void 			Contact::setDarkestSecret()
{
	std::cout << "Enter darkest secret" << std::endl;
	if (std::cin.peek() == EOF)
		exit(1);
	std::getline(std::cin, this->darkestSecret);
}

std::string		Contact::getDarkestSecret() const
{
	return (this->darkestSecret);
}