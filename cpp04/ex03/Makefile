# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 17:51:32 by ygbouri           #+#    #+#              #
#    Updated: 2022/11/09 12:39:21 by ygbouri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

CC = @c++

FLAG = -Wall -Wextra -Werror -std=c++98

HEADER = AMateria.hpp Character.hpp Cure.hpp ICharacter.hpp IMateriaSource.hpp Ice.hpp MateriaSource.hpp

NAME = inter

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	@$(CC) $(FLAG) $(OBJ) -o $(NAME)
	echo "done"
clean :
	@rm -rf $(OBJ)
	@echo "clean"

fclean : clean
	@rm -rf $(NAME)

re : fclean all
