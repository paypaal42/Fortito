LIB = libft.a 

NAME = ./a.out

SCR = $(wildcard /*.c) 

SCR1 = ft_putchar.c \
	   ft_memset.c 

MAIN = main.c

FLAGS = -Werror -Wall -Wextra 

CC = gcc

all: $(LIB)

$(LIB):
	$(CC) $(SRC1) $(MAIN) $(FLAGS)
	$(NAME)

clean: 
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all



