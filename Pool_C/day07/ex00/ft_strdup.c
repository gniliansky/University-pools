/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 19:45:14 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/28 09:29:23 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*bufer;
	int		index;

	index = 0;
	while (src[index] != '\0')
	{
		index = index + 1;
	}
	bufer = (char*)malloc(1 * (index + 1));
	index = 0;
	while (src[index] != '\0')
	{
		bufer[index] = src[index];
		index = index + 1;
	}
	bufer[index] = '\0';
	return (bufer);
}
