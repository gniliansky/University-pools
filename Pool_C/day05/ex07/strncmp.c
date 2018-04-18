/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 15:49:25 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/26 17:53:56 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && s1[index] == s2[index] &&
		s1[index] != '\0' && s2[index] != '\0')
	{
		index = index + 1;
	}
	return (s1[index] - s2[index]);
}
