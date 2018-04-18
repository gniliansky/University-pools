/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 21:58:25 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/10/08 11:27:58 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char		*rush04(int x, int y, int col, int row)
{
	char	*str;
	int		i;

	i = 0;
	str = (char*)malloc(sizeof(char) * ((x + 1) * y + 1));
	while (col <= y)
	{
		while (row <= x)
		{
			if ((col == 1 && row == 1) || ((col == y && row == x)
				&& (col != 1 && row != 1)))
				str[i++] = 'A';
			else if ((col == y && row == 1) || (col == 1 && row == x))
				str[i++] = 'C';
			else if (col == 1 || col == y || row == 1 || row == x)
				str[i++] = 'B';
			else
				str[i++] = ' ';
			row++;
		}
		col++;
		str[i++] = '\n';
		row = 1;
	}
	return (str);
}
