# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/26 10:07:57 by ybenlafk          #+#    #+#              #
#    Updated: 2023/08/26 10:07:57 by ybenlafk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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