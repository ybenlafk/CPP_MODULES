# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 14:18:17 by ybenlafk          #+#    #+#              #
#    Updated: 2023/07/18 14:40:38 by ybenlafk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Serializer
SRC= Serializer.cpp main.cpp
OBG= $(SRC:.cpp=.o)
FLAGS= -Wextra -Wall -Werror -std=c++98

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