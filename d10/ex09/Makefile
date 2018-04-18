# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wawong <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 19:17:29 by wawong            #+#    #+#              #
#    Updated: 2018/03/27 22:49:16 by wawong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = do-op

SRC = main.c math.c print.c ft_atoi.c

OBJECT = main.o math.o print.o ft_atoi.o

HEADER = main.h ft_opp.h

CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRC) $(HEADER)
	@$(CC) -o $(NAME) $(OBJECT)

clean:
	@/bin/rm -f $(OBJECT)

fclean: clean
	@/bin/rm -f $(NAME)
