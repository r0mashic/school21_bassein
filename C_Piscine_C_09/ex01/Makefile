NAME = libft.a
GCC = gсс -Wall -Wextra -Werror
SRSC = ./srcs/
SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_stcmp.c
OBJECT = $(SRC:.c=.o)
all: $(NAME)
	$(GCC) -c $(SRC)
	ar rc $(NAME) $(OBJECT)
clean:
	rm -rf $(OBJECT)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all