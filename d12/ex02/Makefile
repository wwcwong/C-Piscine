# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wawong <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/28 14:34:58 by wawong            #+#    #+#              #
#    Updated: 2018/03/29 10:58:24 by wawong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = ft_tail

SRC = main.c

OBJECT = main.o

CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRC)
	@$(CC) -o $(NAME) $(OBJECT)

clean:
	@/bin/rm -f $(OBJECT)

fclean: clean
	@/bin/rm -f $(NAME)
