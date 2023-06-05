# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/04 20:09:01 by ybenlafk          #+#    #+#              #
#    Updated: 2023/06/04 20:12:16 by ybenlafk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Zombie

SRCS= Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
HEADER= Zombie.hpp
OBGJ= $(SRCS:.cpp=.o)
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
FRM = rm -rf

all: $(NAME)

$(NAME): $(OBGJ)
	$(CC) $(CFLAGS) $(OBGJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS)  -c $< -o $@

clean:
	$(FRM) $(OBGJ) 

fclean: clean
	$(FRM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
