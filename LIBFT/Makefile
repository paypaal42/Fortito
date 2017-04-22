NAME = libft.a 

CC = -Wall -Werror -Wextra

SRC = $(wildcard ft_*.c)

OBJ = $(SRC:.c=.o)

HEADER = .

VPATH = .

all: $(NAME)

$(NAME): $(SRC)
	gcc -g -c $^ $(CC) -I $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
