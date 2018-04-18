# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAkefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wawong <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/31 18:48:11 by wawong            #+#    #+#              #
#    Updated: 2018/04/01 19:35:40 by wawong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = rush-2

SRC = *.c

OBJECT = *.o

HEADER = *.h

CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRC) -I $(HEADER)
	@$(CC) -o $(NAME) $(OBJECT)

clean:
	@/bin/rm -f $(OBJECT)

fclean: clean
	@/bin/rm -f $(NAME)
	
