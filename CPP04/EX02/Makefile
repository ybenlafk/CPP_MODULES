# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/10 12:54:54 by ybenlafk          #+#    #+#              #
#    Updated: 2023/06/18 09:33:46 by ybenlafk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Program
SRC= AAnimal.cpp Dog.cpp Cat.cpp\
	WrongAnimal.cpp WrongCat.cpp\
	Brain.cpp main.cpp
HEADER=AAnimal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
FLAGS= -Wextra -Wall -Werror -std=c++98
CPP= c++
OBG= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBG)
	$(CPP) $(FLAGS) $(OBG) -o $(SRC)

%.o: %.cpp $(HEADER)
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBG)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re