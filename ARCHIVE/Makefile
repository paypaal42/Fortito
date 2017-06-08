NAME = libft.a
CC = clang
FLAGS = -Wall -Werror -Wextra
HEADER = libft.h
SRCS = ft_atoi.c\
	   ft_bzero.c\
	   ft_isalnum.c\
	   ft_isalpha.c\
	   ft_isascii.c\
	   ft_isdigit.c\
	   ft_isprint.c\
	   ft_itoa.c\
	   ft_memalloc.c\
	   ft_memccpy.c\
	   ft_memchr.c\
	   ft_memcmp.c\
	   ft_memcpy.c\
	   ft_memdel.c\
	   ft_memmove.c\
	   ft_memset.c\
	   ft_putchar.c\
	   ft_putchar_fd.c\
	   ft_putendl.c\
	   ft_putendl_fd.c\
	   ft_putnbr.c\
	   ft_putnbr_fd.c\
	   ft_putstr.c\
	   ft_putstr_fd.c\
	   ft_strcat.c\
	   ft_strchr.c\
	   ft_strcmp.c\
	   ft_strcpy.c\
	   ft_strclr.c\
	   ft_strdel.c\
	   ft_strdup.c\
	   ft_strequ.c\
	   ft_striter.c\
	   ft_striteri.c\
	   ft_strjoin.c\
	   ft_strlcat.c\
	   ft_strlen.c\
	   ft_strmap.c\
	   ft_strmapi.c\
	   ft_strncat.c\
	   ft_strncmp.c\
	   ft_strncpy.c\
	   ft_strnequ.c\
	   ft_strnew.c\
	   ft_strnstr.c\
	   ft_strrchr.c\
	   ft_strsplit.c\
	   ft_strstr.c\
	   ft_strsub.c\
	   ft_strtrim.c\
	   ft_tolower.c\
	   ft_toupper.c

OBJS = $(SRCS:.c=.o)

DOBJS = $(addprefix objs/, $(OBJS))

all: $(NAME)

$(NAME): $(DOBJS)
	@ar rc $(NAME) $(DOBJS)
	@ranlib $(NAME)
	@echo "\033[0;32m$(NAME) created succefully\0033[0m"

objs/%.o: %.c
	@mkdir -p objs
	@$(CC) $(FLAGS) -o $@ -c $< -I $(HEADER)
	@echo "\033[0;32m$< => $@ ✅ \0033[0m"

clean:
	@/bin/rm -rf objs
	@/bin/rm -rf .*.sw*
	@/bin/rm -rf a.out
	@/bin/rm -rf a.out.dSYM
	@echo "$(RED)\033[0;34m$(DOBJS)$(END) removed succefully\0033[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[0;35m$(NAME) removed succefully\0033[0m"

re: fclean all
