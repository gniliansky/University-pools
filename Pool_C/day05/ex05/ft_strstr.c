/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 17:39:16 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/26 13:54:50 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

char		*ft_strstr(char *str, char *to_find)
{
	int		index_str;
	int		index_find;

	index_str = 0;
	index_find = 0;
	while (str[index_str] != '\0')
	{
		if (str[index_str] == to_find[index_find])
		{
			while (str[index_str] == to_find[index_find])
			{
				if (to_find[index_find + 1] == '\0')
				{
					return (&str[index_str - index_find]);
				}
				index_find = index_find + 1;
				index_str = index_str + 1;
			}
		}
		index_str = index_str + 1;
	}
	return (0);
}
