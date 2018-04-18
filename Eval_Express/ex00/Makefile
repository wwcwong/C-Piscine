# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wawong <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/28 14:34:58 by wawong            #+#    #+#              #
#    Updated: 2018/04/01 16:42:20 by wawong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = eval_expr

SRC = main.c eval.c math.c struct.c

OBJECT = main.o eval.o math.o struct.o

HEADER = eval.h math.h struct.h

GCH = *.gch

CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRC) -I $(HEADER)
	@$(CC) -o $(NAME) $(OBJECT)

clean:
	@/bin/rm -f $(OBJECT) $(GCH)

fclean: clean
	@/bin/rm -f $(NAME)
