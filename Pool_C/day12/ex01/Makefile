# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daalexan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/05 10:39:55 by daalexan          #+#    #+#              #
#    Updated: 2017/10/05 12:18:59 by daalexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
RM = rm -f
OBJ = ft_cat.o
CC = gcc
FLAGS = -c -Wall -Werror -Wextra
SRCS = ft_cat.c

all : ${NAME}

${NAME}	:
		${CC} ${FLAGS} ${SRCS}
		${CC} ${OBJ} -o ${NAME}

clean :
		${RM} ${OBJ} 

fclean : clean
		${RM} ${NAME}

