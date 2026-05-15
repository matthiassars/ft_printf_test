CC      = cc
CFLAGS  = -Wall -Wextra -Werror -I./ft_printf
NAME    = test_ft_printf
LDFLAGS = -L./ft_printf
LDLIBS  = -lftprintf

SRC     = test_ft_printf.c
OBJ     = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) ft_printf/libftprintf.a
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS) $(LDLIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

ft_printf/libftprintf.a:
	$(MAKE) -C ft_printf

clean:
	rm -f $(OBJ)
	$(MAKE) -C ft_printf clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C ft_printf fclean

re: fclean all

.PHONY: all clean fclean re
