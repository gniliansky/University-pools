/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 18:00:45 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/10/08 13:03:33 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

char	*rush00(int x, int y, int col, int row);
char	*rush01(int x, int y, int col, int row);
char	*rush02(int x, int y, int col, int row);
char	*rush03(int x, int y, int col, int row);
char	*rush04(int x, int y, int col, int row);
void	ft_print_stop(void);
void	ft_print(int rush, int x, int y);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_print_end(void);
#endif
