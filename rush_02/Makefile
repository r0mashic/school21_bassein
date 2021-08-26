NAME = main
CC = gcc -Wall -Wextra -Werror
WORK = main.c
OBJ = ${WORK:.c=.o}
all: ${NAME}

${NAME}:
	${CC} -c ${WORK}
	${CC} ${OBJ} -o ${NAME} 

clean:
	rm -f  $(OBJ)

fclean: clean
	rm -f  $(NAME)

re: fclean all