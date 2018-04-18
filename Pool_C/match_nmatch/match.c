/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 13:22:24 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/10/01 21:23:08 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check(char *s1, char *s2, int *index1, int index2)
{
	int i2;

	i2 = index2;
	while (s1[*index1] != '\0' || s2[index2] != '\0')
	{
		if (s1[*index1] == s2[index2])
		{
			*index1 = *index1 + 1;
			index2++;
		}
		else if (s2[index2] == '*')
		{
			return (index2);
		}
		else if (s1[*index1] != s2[index2])
		{
			return (i2);
		}
	}
	return (index2);
}

int		ft_first(char *s1, char *s2, int index1, int index2)
{
	index1 = 0;
	index2 = 0;
	while (s1[index1] != '\0' || s2[index2] != '\0')
	{
		if (s2[index2] == '*' && s2[index2 + 1] == '\0')
			return (1);
		else if (s2[index2] == '*')
			index2++;
		else if (s1[index1] != s2[index2] && s2[index2 - 1] == '*')
		{
			while (s1[index1] != s2[index2] && s1[index1] != '\0')
				index1++;
			if (s1[index1] == '\0')
				break ;
		}
		else if (s1[index1] == s2[index2])
			index2 = ft_check(s1, s2, &index1, index2);
		else if (s1[index1] != s2[index2] && s2[index2 - 1] != '*')
			return (0);
	}
	while (s2[index2] == '*')
		index2++;
	if (s1[index1] == '\0' && s2[index2] == '\0')
		return (1);
	return (0);
}

int		match(char *s1, char *s2)
{
	int index1;
	int index2;

	index1 = 0;
	index2 = 0;
	return (ft_first(s1, s2, index1, index2));
}
