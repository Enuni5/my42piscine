SRC			= main.c ft_atoi.c ft_checkinput.c ft_putstr.c 

OBJS		= ${SRC:.c=.o}

HEAD		= ft_ft.h

NAME		= rush-02

RM			= rm -f

GCC			= gcc

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${GCC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
