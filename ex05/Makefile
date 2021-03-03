CC = gcc

SRCS 	= main.c
OBJS	= ${SRCS:.c=.o}
HEADER	= atoi.h functions.h write_s.h
NAME	= do-op
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	@${CC} ${CFLAGS} -c @$< -o ${<:.c=.o} -I${HEADER}

${NAME}:
	@${CC} ${CFLAGS} ${SRCS} -o ${NAME}

all: @${NAME}

clean:
	@${RM} ${OBJS}

fclean : clean
	@${RM} ${NAME}
