# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/04 20:53:43 by ybenlafk          #+#    #+#              #
#    Updated: 2023/06/08 12:24:16 by ybenlafk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= harlFilter

SRCS= Harl.cpp main.cpp
HEADER= Harl.hpp
OBGJ= $(SRCS:.cpp=.o)
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
FRM = rm -rf

all: $(NAME)

$(NAME): $(OBGJ)
	$(CC) $(CFLAGS) $(OBGJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	$(FRM) $(OBGJ) 

fclean: clean
	$(FRM) $(NAME)

re: fclean all

.PHONY: all clean fclean re