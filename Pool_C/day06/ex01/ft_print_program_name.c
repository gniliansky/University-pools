/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 11:07:37 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/27 21:50:30 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int index;

	index = 0;
	if (argc > 0)
	{
		while (argv[0][index] != '\0')
		{
			ft_putchar(argv[0][index]);
			index = index + 1;
		}
		ft_putchar('\n');
	}
	return (0);
}
