/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 15:37:10 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/27 16:49:01 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int index;
	int j;

	if (argc > 1)
	{
		index = 0;
		j = argc - 1;
		while (j > 0)
		{
			while (argv[j][index] != '\0')
			{
				ft_putchar(argv[j][index]);
				index = index + 1;
			}
			ft_putchar('\n');
			j = j - 1;
			index = 0;
		}
	}
	return (0);
}
