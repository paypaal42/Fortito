NAME = libft.a 

FLAGS = -Werror -Wall -Wextra 

CC = gcc

SRC_C = $(wildcard *.c)

SRC_O = $(wildcard *.o) 

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
	rm -rf .*.sw*
	rm -rf ./a.out

fclean: clean
	rm -rf $(NAME)

re: fclean all

t: clean all main

