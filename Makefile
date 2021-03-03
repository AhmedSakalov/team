# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By:  <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/03 12:12:03 by cgyarado          #+#    #+#              #
#    Updated: 2021/03/03 17:42:36 by cgyarado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean install uninstall

CC = gcc

NAME = do-op

SRC = .c .c .c ...
OBJ = .o .o .o ...
LIBAS = .a

HEADER = do_op.h

CFLAGS = -c -Wall -Wextra -Werror 

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) $(OBJ) $(HEADER) $(LIBAS) -o $(NAME)

clean:
	rm -rf do_op.h.gch

fclean: clean
	rm -rf $(NAME)

re: fclean 
	all
