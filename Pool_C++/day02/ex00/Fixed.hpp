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

class Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed & obj);
	Fixed		& operator= (const Fixed & obj);
	int 		getRawBits(void) const;
	void 		setRawBits(int const raw);

private:
	int					_raw;
	const static int	literal_stat;

};


#endif
