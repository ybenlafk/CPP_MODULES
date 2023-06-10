# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/10 12:54:54 by ybenlafk          #+#    #+#              #
#    Updated: 2023/06/10 13:25:52 by ybenlafk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Program
SRC= Animal.cpp Dog.cpp Cat.cpp main.cpp
HEADER=Animal.hpp Cat.hpp Dog.hpp
OBG= $(SRC:.cpp=.o)
FLAGS= -Wextra -Wall -Werror -std=c++98
CPP= c++

all: $(NAME)

$(NAME): $(OBG)
	$(CPP) $(FLAGS) $(OBG) -o $(NAME)

.o: .cpp
	$(CPP) $(FLAGS) -c $(SRC)

clean:
	rm -rf $(OBG)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re