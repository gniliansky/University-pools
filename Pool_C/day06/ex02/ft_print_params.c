/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 12:26:33 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/27 13:12:04 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int index;
	int i;

	index = 0;
	i = 1;
	while (i < argc)
	{
		while (argv[i][index] != '\0')
		{
			ft_putchar(argv[i][index]);
			index = index + 1;
		}
		ft_putchar('\n');
		i = i + 1;
		index = 0;
	}
	return (0);
}
