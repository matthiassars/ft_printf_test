CC =		cc
CFLAGS =	-Wall -Wextra -I./ft_printf -I./ft_printf/libft
TARGETS =	test_ft_printf
LDFLAGS =   -L./ft_printf -L./ft_printf/libft
LDLIBS =    -lftprintf -lft

# Default rule
all: $(TARGETS)

test: test_ft_printf.c ft_prinf/libftprintf.a
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS) $(LDLIBS)

ft_prinf/libftprintf.a:
	$(MAKE) -C ft_printf

clean:
	rm -f $(TARGETS)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
