# **************************************************************************** #
#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/02 12:38:52 by vgnylyan          #+#    #+#              #
#    Updated: 2017/10/02 12:49:05 by vgnylyan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	  srcs/ft_strlen.c srcs/ft_swap.c
IRC = includes/

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(IRC)	
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o \
		ft_strlen.o ft_swap.o

clean:
	/bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o \
		ft_strlen.o ft_swap.o

fclean:	clean
	/bin/rm -f $(NAME)

re:	fclean all
