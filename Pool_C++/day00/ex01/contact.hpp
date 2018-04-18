/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 12:09:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/03/30 12:09:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{
private:
	int				index;
	std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	std::string		login;
	std::string		postalAddress;
	std::string		emailAddress;
	std::string		phoneNumber;
	std::string		birthdayDate;
	std::string		favorite_Meal;
	std::string		underwearColor;
	std::string		darkestSecret;

public:
					Contact();
					Contact(int index);
	void			setIndex(int index);
	int				getIndex() const;
	void 			setFirstName();
	std::string		getFirstName() const;
	void 			setLastName();
	std::string		getLastName() const;
	void 			setNickname();
	std::string		getNickname() const;
	void 			setLogin();
	std::string		getLogin() const;
	void 			setPostalAddress();
	std::string		getPostalAddress() const;
	void 			setEmailAddress();
	std::string		getEmailAddress() const;
	void 			setPhoneNumber();
	std::string		getPhoneNumber() const;
	void 			setBirthdayDate();
	std::string		getBirthdayDate() const;
	void 			setFavorite_Meal();
	std::string		getFavorite_Meal() const;
	void 			setUnderwear_Color();
	std::string		getUnderwear_Color() const;
	void 			setDarkestSecret();
	std::string		getDarkestSecret() const;

};


#endif
