# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 14:35:08 by ybenlafk          #+#    #+#              #
#    Updated: 2023/08/27 15:08:36 by ybenlafk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Program
SRC= main.cpp
OBJ= $(SRC:.cpp=.o)
CFLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp *.hpp
	c++ $(CFLAGS) -c $< -o $@

fclean:
	rm -rf $(OBJ) $(NAME)
