/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 11:21:08 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/26 20:30:06 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_and_increment_result(int *result, char *c, int is_minus)
{
	if (is_minus)
		return (*result * 10 - (*c - 48));
	else
		return (*result * 10 + (*c - 48));
}

int		ft_atoi(char *str)
{
	int result;
	int is_minus;
	int i;

	is_minus = 0;
	result = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i = i + 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_minus = 1;
		i = i + 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = get_and_increment_result(&result, str + i, is_minus);
		i = i + 1;
	}
	return (result);
}
