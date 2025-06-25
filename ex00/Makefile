NAME = Template
SRC = main.cpp whatever.cpp
FLAGS = c++ -Wall -Werror -Wextra -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
	$(FLAGS) $(SRC) -o $(NAME)

clean :

fclean : clean
	rm -rf $(NAME)

re : fclean all
