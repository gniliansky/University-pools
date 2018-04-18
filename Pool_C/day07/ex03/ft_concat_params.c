/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 13:30:31 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/28 18:08:34 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_lenstr(int argc, char **argv)
{
	int		i;
	int		index;
	int		len;

	len = 0;
	i = 1;
	index = 0;
	while (i < argc)
	{
		while (argv[i][index] != '\0')
		{
			len = len + 1;
			index = index + 1;
		}
		index = 0;
		i = i + 1;
		len = len + 1;
	}
	len = len + 1;
	return (len);
}

char		*ft_calculate(int argc, char **argv)
{
	char	*str;
	int		index_str;
	int		index_result;
	int		i;

	i = 1;
	index_str = 0;
	index_result = 0;
	str = (char*)malloc(1 * ft_lenstr(argc, argv));
	while (i < argc)
	{
		while (argv[i][index_str] != '\0')
		{
			str[index_result] = argv[i][index_str];
			index_str = index_str + 1;
			index_result = index_result + 1;
		}
		index_str = 0;
		i = i + 1;
		str[index_result] = '\n';
		index_result++;
	}
	str[index_result - 1] = '\0';
	return (str);
}

char		*ft_concat_params(int argc, char **argv)
{
	char	*str;

	if (argc < 1)
	{
		return (0);
	}
	str = ft_calculate(argc, argv);
	return (str);
}
