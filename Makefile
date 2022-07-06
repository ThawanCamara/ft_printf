NAME := libftprintf.a

RM := rm -rf

CC := cc

CFLAGS := -Wall -Werror -Wextra

SRCS := 	ft_printf.c	\
			utils/char_utils.c utils/int_utils.c	\
			utils/hex_utils.c
					
OBJS := ${SRCS:.c=.o}

all: ${NAME}


${NAME}: ${OBJS} ft_printf.h
	ar -rc ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
