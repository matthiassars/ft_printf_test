NAME =		test
SRC =		test.c
OBJ =		$(SRC:.c=.o)
CC =		cc
FLAGS =		-Wall -Wextra -lbsd
LIB =		ft_printf/libftprintf.a

# Default rule
all: $(NAME)

# Generic rule for all targets
# $@ = Name of the target (e.g., test_part1)
# $< = Name of the first dependency (e.g., test_part1.c)
$(NAME): $(SRC) $(LIB)
	$(CC) $(FLAGS) $(SRC) $(LIB) -o $(NAME)

clean:
	rm -f $(TARGETS)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
