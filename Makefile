# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgyarado <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/03 12:12:03 by cgyarado          #+#    #+#              #
#    Updated: 2021/03/03 20:56:45 by cgyarado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = do-op

SRC = main.c 
OBJ = $(SRC:.c=.o)

HEADER = atoi.h

CFLAGS = -c -Wall -Wextra -Werror

all: @$(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRC) -I $(HEADER)
	@$(CC) $(OBJ) -o $(NAME)

clean:
	@rm -f do_op.h.gch *.o 

fclean: clean
	@rm -f $(NAME)

re: fclean all
