# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/26 15:22:45 by ybenlafk          #+#    #+#              #
#    Updated: 2023/08/26 15:25:58 by ybenlafk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Program
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp *.hpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
