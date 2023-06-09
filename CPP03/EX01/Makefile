# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/09 20:17:26 by ybenlafk          #+#    #+#              #
#    Updated: 2023/06/09 23:21:02 by ybenlafk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ClapTrap
SRC= ScavTrap.cpp ClapTrap.cpp main.cpp
HEADER= ClapTrap.hpp ScavTrap.hpp
FLAGS= -Wextra -Wall -Werror -std=c++98
CPP= c++
OBG= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBG)
	$(CPP) $(FLAGS) $(OBG) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CPP) $(FLAGS) -c $< -o $@
clean:
	rm -rf $(OBG)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re