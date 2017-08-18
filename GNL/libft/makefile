CC=GCC

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_atoi.c\
      ft_bzero.c\
      ft_isalnum.c\
      ft_isalpha.c\
      ft_isdigit.c\
      ft_isprint.c\
      ft_isascii.c\
      ft_memcpy.c\
      ft_memccpy.c\
      ft_memchr.c\
      ft_memcmp.c\
      ft_memmove.c\
      ft_memset.c\
      ft_strcat.c\
      ft_strchr.c\
      ft_strcmp.c\
      ft_strcpy.c\
      ft_strdup.c\
      ft_strlcat.c\
      ft_strlen.c\
      ft_strncat.c\
      ft_strncmp.c\
      ft_strncpy.c\
      ft_strnstr.c\
      ft_strrchr.c\
      ft_strstr.c\
      ft_tolower.c\
	  ft_toupper.c\
      ft_putchar.c\
      ft_putstr.c\
      ft_putchar_fd.c\
      ft_putstr_fd.c\
      ft_putnbr_fd.c\
      ft_putnbr.c\
      ft_putendl_fd.c\
      ft_putendl.c\
      ft_memalloc.c\
      ft_memdel.c\
      ft_strnew.c\
      ft_strdel.c\
      ft_strclr.c\
      ft_striter.c\
      ft_striteri.c\
      ft_strmap.c\
      ft_strmapi.c\
      ft_strequ.c\
      ft_strnequ.c\
      ft_strsub.c\
	  ft_strsplit.c\
      ft_strjoin.c\
      ft_strtrim.c\
      ft_strctrim.c\
      ft_itoa.c\
      ft_lstnew.c\
      ft_lstdelone.c\
      ft_lstdel.c\
      ft_lstadd.c\
      ft_lstiter.c\
      ft_lstmap.c\
	  ft_count_if.c ft_foreach.c ft_is_negative.c ft_swap.c \
	  ft_tolower.c ft_toupper.c ft_islower.c ft_isupper.c \
	  ft_lstaddback.c ft_iterative_power.c ft_max.c ft_min.c \

OBJ = $(SRC:.c=.o)


$(NAME):
	gcc -c $(FLAGS) $(SRC) -I includes
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean
	clean:
	  rm -rf *.o
