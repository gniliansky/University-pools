NAME = megaphone

SRC =  main.cpp megaphone.cpp

HDR = megaphone.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HDR)
	clang++ -Wall -Wextra -Werror -o $(NAME) $(OBJ)

.c.o:
	clang++  -Wall -Wextra -Werror  -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
