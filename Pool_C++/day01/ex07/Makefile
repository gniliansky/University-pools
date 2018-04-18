NAME = replace

SRC =  main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -std=c++98 -Wall -Werror -Wextra -o $(NAME) $(OBJ)

.c.o:
	clang++ -std=c++98 -Wall -Werror -Wextra -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
