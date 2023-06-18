# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/18 09:22:24 by ybenlafk          #+#    #+#              #
#    Updated: 2023/06/18 09:37:54 by ybenlafk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= sss
SRC= main.cpp
HEADER= AMateria.hpp
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
