NAME = phonebook

SRC =  main.cpp PhoneBook.cpp contact.cpp

HDR = PhoneBook.hpp contact.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HDR)
	clang++ -std=c++98 -Wall -Wextra -Werror -o $(NAME) $(OBJ)

.c.o:
	clang++ -std=c++98 -Wall -Wextra -Werror  -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
