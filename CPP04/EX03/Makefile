# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/18 09:22:24 by ybenlafk          #+#    #+#              #
#    Updated: 2023/06/18 23:52:31 by ybenlafk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Program
SRC= AMateria.cpp Cure.cpp Ice.cpp\
	Character.cpp MateriaSource.cpp\
	main.cpp
HEADER= AMateria.hpp Cure.hpp Ice.hpp\
		ICharacter.hpp IMateriaSource.hpp\
		Character.hpp MateriaSource.hpp

FLAGS= -Wextra -Wall -Werror -std=c++98
CPP= c++
OBG= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBG)
	$(CPP) $(FLAGS) $(OBG) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBG)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
