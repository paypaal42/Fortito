NAME = libft.a

FLAGS = -Wall -Wextra -Werror

HEADER = includes/

PATH_SRC = srcs/

SRC = 	srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c 

SRC_O = ft_putchar.o \
		ft_putstr.o \
		ft_strcmp.o \
		ft_strlen.o \
		ft_swap.o 

all : $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -c -I $(HEADER)
	ar rc $(NAME) $(SRC_O)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

