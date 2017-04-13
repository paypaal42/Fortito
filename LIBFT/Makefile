NAME = libft.a 

FLAGS = -Werror -Wall -Wextra 

CC = gcc

SRC_C = ft_memset.c ft_putchar.c

SRC_O = ft_memset.o \
		ft_putchar.o

LIB = -L. -lft

MAIN = 1main.c

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC_C)
	ar rc $(NAME) $(SRC_O)
	ranlib $(NAME)

main: 
	$(CC) $(FLAGS) $(MAIN) $(LIB) && ./a.out

clean: 
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)
	rm -rf ./a.out

re: fclean all

t: fclean all main

