NAME= Base
SRC= utils.cpp Base.cpp main.cpp
OBG= $(SRC:.cpp=.o)
FLAGS= -Wextra -Wall -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(OBG)
	c++ $(FLAGS) $(OBG) -o $(NAME)

%.o: %.cpp *.hpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBG)

fclean: clean
	rm -rf ${NAME}

re: fclean all