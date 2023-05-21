# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 20:04:22 by ygbouri           #+#    #+#              #
#    Updated: 2022/11/13 17:27:24 by ygbouri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = Bureaucrat.cpp main.cpp Form.cpp

OBJ = $(SRC:.cpp=.o)


CC = @c++

FLAG = -Wall -Wextra -Werror -std=c++98

HEADER = Bureaucrat.hpp Form.hpp

NAME = form


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
