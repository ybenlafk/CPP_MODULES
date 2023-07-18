# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 09:18:08 by ybenlafk          #+#    #+#              #
#    Updated: 2023/07/18 11:14:30 by ybenlafk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= convert
SRC= ScalarConverter.cpp utils.cpp main.cpp
FLAGS= -Wall -Wextra -Werror -std=c++98
OBG= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBG)
	c++ $(FLAGS) $(OBG) -o $(NAME)

%.o: %.cpp *.hpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBG)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re