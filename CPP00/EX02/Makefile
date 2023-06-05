# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/29 13:23:25 by ybenlafk          #+#    #+#              #
#    Updated: 2023/05/29 13:36:58 by ybenlafk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= tests

SRCS= tests.cpp Account.cpp 
HEADER= Account.hpp
OBGJ= $(SRCS:.cpp=.o)
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
FRM = rm -rf

all: $(NAME)

$(NAME): $(OBGJ)
	$(CC) $(CPPFLAGS) $(OBGJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(CPPFLAGS)  -c $< -o $@

clean:
	$(FRM) $(OBGJ) 

fclean: clean
	$(FRM) $(NAME)

re: fclean all

.PHONY: all clean fclean re