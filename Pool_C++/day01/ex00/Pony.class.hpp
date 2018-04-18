/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 15:46:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/02 15:46:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PONY_CLASS_H
#define PONY_CLASS_H

#include <iostream>

class Pony
{
public:
	Pony(std::string name, std::string age, std::string color);
	~Pony();

	void		setName(std::string name);
	std::string	getName(void) const;
	void		setAge(std::string age);
	std::string	getAge(void) const;
	void		setColor(std::string color);
	std::string	getColor(void) const;

private:
	std::string _name;
	std::string _age;
	std::string _color;
};

#endif