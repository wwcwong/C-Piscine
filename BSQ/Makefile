# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acakste <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/03 08:22:24 by acakste           #+#    #+#              #
#    Updated: 2018/04/04 21:45:47 by acakste          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS = main.c load.c check.c free.c print.c ft_string.c

OBJ = main.o load.o check.o free.o print.o ft_string.o

INC = -Wall -Wextra -Werror -fpack-struct

all: $(NAME)

$(NAME):
	@gcc -c $(SRCS) $(INC)
	@gcc $(OBJ) -o $(NAME)

clean:
	@/bin/rm -rf $(OBJ)

fclean: clean
	@/bin/rm -rf $(NAME)
