# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By:  <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/03 12:12:03 by cgyarado          #+#    #+#              #
#    Updated: 2021/03/03 22:04:07 by raurelia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= main.c
OBJS	= ${SRCS:.c=.o}
HEADER	= atoi.h functions.h write_s.h
NAME	= do-op
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o :
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${HEADER}

${NAME} : @$(CC) $(SRCS) ${OBJS}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: $(SRCS)

clean :
	@${RM} ${OBJS}

fclean : clean
	@${RM} ${NAME}
