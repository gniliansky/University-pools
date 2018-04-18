/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 15:53:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/04 15:53:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include <cstdio>

const int 	Fixed::literal_stat = 8;

Fixed::Fixed(void) : _raw(0)
{
//	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int value)
{
//	std::cout << "Int constructor called" << std::endl;
	value = value << Fixed::literal_stat;
	this->_raw = value;
	return ;
}

Fixed::Fixed(float value)
{
//	std::cout << "Float constructor called" << std::endl;
	value = roundf(value * (1 << Fixed::literal_stat));
	this->_raw = (int)value;
	return ;
}

Fixed::~Fixed(void)
{
//	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed & obj)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
	return ;
}

Fixed		& Fixed::operator= (const Fixed & obj)
{
//	std::cout << "Assignation operator called" << std::endl;
	this->_raw = obj.getRawBits();
	return (*this);
}

void		Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
	return ;
}

int			Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw);
}

float		Fixed::toFloat(void) const
{
	return ((float)this->_raw / (1 << Fixed::literal_stat));
}

int			Fixed::toInt(void) const
{
	return (this->_raw >> Fixed::literal_stat);
}

std::ostream	& operator << (std::ostream & out, Fixed const & fixed)
{
	out << fixed.toFloat();
	return (out);
}

bool		Fixed::operator > (Fixed const & obj) const
{
	if (this->getRawBits() > obj.getRawBits()) {
		return (true);
	}
	return (false);
}

bool		Fixed::operator < (Fixed const & obj) const
{
	if (this->getRawBits() < obj.getRawBits()) {
		return (true);
	}
	return (false);
}

bool		Fixed::operator >= (Fixed const & obj) const
{
	if (this->getRawBits() >= obj.getRawBits()) {
		return (true);
	}
	return (false);
}

bool		Fixed::operator <= (Fixed const & obj) const
{
	if (this->getRawBits() <= obj.getRawBits()) {
		return (true);
	}
	return (false);
}

bool		Fixed::operator == (Fixed const & obj) const
{
	if (this->getRawBits() == obj.getRawBits()) {
		return (true);
	}
	return (false);
}

bool		Fixed::operator != (Fixed const & obj) const
{
	if (this->getRawBits() != obj.getRawBits()) {
		return (true);
	}
	return (false);
}

Fixed		Fixed::operator + (Fixed const & obj) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() + obj.getRawBits());
	return (result);
}

Fixed		Fixed::operator - (Fixed const & obj) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() - obj.getRawBits());
	return (result);
}

Fixed		Fixed::operator * (Fixed const & obj) const
{
	Fixed		result;
	long int	tmp;

	tmp = (long int)this->getRawBits() * (long int)obj.getRawBits() / (1 << Fixed::literal_stat);
	result.setRawBits(tmp);
	return (result);
}

Fixed		Fixed::operator / (Fixed const & obj) const
{
	Fixed		result;
	long int	tmp;

	if (obj.getRawBits() == 0) {
		result.setRawBits(0);
	}
	else {
		tmp = ((long int)this->getRawBits() * (1 << Fixed::literal_stat)) / (long int)obj.getRawBits();
		result.setRawBits(tmp);
	}
	return (result);
}

Fixed		& Fixed::operator ++ (void)
{
	this->_raw++;
	return (*this);
}

Fixed		Fixed::operator ++ (int)
{
	Fixed result(*this);

	++*this;
	return result;
}

Fixed		& Fixed::operator -- (void)
{
	this->_raw--;
	return (*this);
}

Fixed		Fixed::operator -- (int)
{
	Fixed result(*this);

	--*this;
	return result;
}

Fixed		& Fixed::min(Fixed & obj1, Fixed & obj2)
{
	return ((obj1 < obj2) ? obj1 : obj2);
}

Fixed const		& Fixed::min(Fixed const & obj1, Fixed const & obj2)
{
	return ((obj1 < obj2) ? obj1 : obj2);
}

Fixed		& Fixed::max(Fixed & obj1, Fixed & obj2)
{
	return ((obj1 > obj2) ? obj1 : obj2);
}

Fixed const		& Fixed::max(Fixed const & obj1, Fixed const & obj2)
{
	return ((obj1 > obj2) ? obj1 : obj2);
}