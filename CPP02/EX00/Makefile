# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/06 19:43:04 by ybenlafk          #+#    #+#              #
#    Updated: 2023/06/06 19:45:06 by ybenlafk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name= program

src= Fixed.cpp main.c

obj= $(src:.c=.o)
flags= -Wall -Wextra -Werror
cpp= c++
all: $(name)

$(name): $(obj)
	$(cpp) $(flags) $(obj) -o $(name)

clean:
	rm -rf $(obj)
fclean: clean
	rm -rf $(name)
re: fclean all
