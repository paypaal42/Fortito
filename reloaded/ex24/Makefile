FLAGS = -Wall -Wextra -Werror

SRC = srcs/.

HEADER = includes/.

$(NAME):
	cc $(FLAGS) $(SRC) $(HEADER) -I includes -o $(NAME)

all: $(NAME)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

