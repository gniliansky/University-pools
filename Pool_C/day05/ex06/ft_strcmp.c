/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 14:31:17 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/26 15:43:17 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strcmp(char *s1, char *s2)
{
	int index;
	int result;

	index = 0;
	while (s1[index] == s2[index])
	{
		index = index + 1;
	}
	result = s1[index] - s2[index];
	return (result);
}
