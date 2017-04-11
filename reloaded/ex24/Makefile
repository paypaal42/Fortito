NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = 	srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c 

OBJS	=	$(SRC:.c=.o)

HEADER = -I includes/

all : $(NAME)

$(NAME): $(OBJS)
	gcc $(FLAGS) $(OBJ) $(HEADER) -L. -lstr

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

