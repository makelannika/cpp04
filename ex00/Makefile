# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/26 23:37:05 by amakela           #+#    #+#              #
#    Updated: 2024/08/27 01:14:20 by amakela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	animal

CPPFILES	=	src/main.cpp		src/Animal.cpp			src/Dog.cpp			\
				src/Cat.cpp			src/WrongAnimal.cpp		src/WrongCat.cpp
 
OFILES		=	$(CPPFILES:.cpp=.o)

HEADERS		=	-I include

CC			=	c++ -std=c++11

FLAGS		=	-Wall -Wextra -Werror

%.o:%.cpp
	$(CC) $(FLAGS) $(HEADERS) -c $< -o $@

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(FLAGS) $(OFILES) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
