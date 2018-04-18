/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 13:23:25 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/24 17:41:12 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line_start(int length)
{
	int			counter;

	counter = 1;
	while (counter <= length)
	{
		if (counter == 1)
		{
			ft_putchar('/');
		}
		else if (counter == length)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
		if (counter == length)
			ft_putchar('\n');
		counter++;
	}
}

void	print_line_middle(int length)
{
	int			counter;

	counter = 1;
	while (counter <= length)
	{
		if (counter == 1 || counter == length)
		{
			ft_putchar('*');
			if (counter == length)
				ft_putchar('\n');
		}
		else
			ft_putchar(' ');
		counter++;
	}
}

void	print_line_end(int length)
{
	int			counter;

	counter = 1;
	while (counter <= length)
	{
		if (counter == 1)
		{
			ft_putchar('\\');
		}
		else if (counter == length)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
		if (counter == length)
			ft_putchar('\n');
		counter++;
	}
}

void	rush(int x, int y)
{
	int		counter;

	counter = 1;
	print_line_start(x);
	while (counter <= y - 2)
	{
		print_line_middle(x);
		counter++;
	}
	if (y > 1)
	{
		print_line_end(x);
	}
}
