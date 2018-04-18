/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 17:45:54 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/28 17:57:53 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_generic(void)
{
	char	*str;
	int		index;

	index = 0;
	str = "Tut tut ; Tut tut\n";
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index = index + 1;
	}
	return ;
}
