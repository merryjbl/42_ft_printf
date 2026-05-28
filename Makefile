NAME = libftprintf.a

SRC =   ft_putchar.c\
		ft_putstr.c\
		ft_putnbr.c\



OBJ = ${SRC:.c=.o}

CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs


all: ${NAME}

${NAME}: ${OBJ}
	${AR} ${NAME} ${OBJ}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
