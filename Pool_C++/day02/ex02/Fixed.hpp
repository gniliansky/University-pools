/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 15:53:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/04 15:53:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(int value);
	Fixed(float value);
	~Fixed();
	Fixed(const Fixed & obj) ;
	Fixed		& operator= (const Fixed & obj);
	int 		getRawBits(void) const;
	void 		setRawBits(int const raw);
	float		toFloat(void) const;
	int			toInt(void) const;
	bool		operator > (Fixed const & obj) const;
	bool		operator < (Fixed const & obj) const;
	bool		operator >= (Fixed const & obj) const;
	bool		operator <= (Fixed const & obj) const;
	bool		operator == (Fixed const & obj) const;
	bool		operator != (Fixed const & obj) const;
	Fixed		operator + (Fixed const & obj) const;
	Fixed       operator - (Fixed const & obj) const;
	Fixed		operator * (Fixed const & obj) const;
	Fixed		operator / (Fixed const & obj) const;
	Fixed		& operator ++ (void);
	Fixed		operator ++(int);
	Fixed		& operator -- (void);
	Fixed		operator --(int);
	static Fixed	& min(Fixed & obj1, Fixed & obj2);
	static Fixed const	& min(Fixed const & obj1, Fixed const & obj2);
	static Fixed	& max(Fixed & obj1, Fixed & obj2);
	static Fixed const	& max(Fixed const & obj1, Fixed const & obj2);

private:
	int					_raw;
	const static int	literal_stat;

};

std::ostream	& operator << (std::ostream & out, Fixed const & fixed);


#endif
