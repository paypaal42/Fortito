NAME = libft.a 

FLAGS = -Werror -Wall -Wextra 

CC = gcc

SRC_C = $(wildcard ft_*.c)

SRC_O = $(wildcard ft_*.o) 

LIB = -L. -lft

MAIN = 1main.c

MAIN2 = 1main_copy.c

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC_C)
	ar rc $(NAME) $(SRC_O)
	ranlib $(NAME)

main: 
	$(CC) $(FLAGS) $(MAIN) $(LIB) && ./a.out

main2: 
	$(CC) $(FLAGS) $(MAIN2) $(LIB) && ./a.out

clean: 
	rm -rf *.o
	rm -rf ./a.out
	rm -rf .*.sw*

fclean: clean
	rm -rf $(NAME)

re: fclean all

t: fclean all main

tt: fclean all main2

norme:
	norminette -R CheckForbiddenSourceHeader $(SRC_C) libft.h
