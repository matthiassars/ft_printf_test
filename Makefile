CC =		cc
CFLAGS =	-Wall -Wextra -I./libftprintf
TARGETS =	test
LDFLAGS =   -L./libftprintf -L./libftprintf/libft
LDLIBS =    -lftprintf -lft

# Default rule
all: $(TARGETS)

# Generic rule for all targets
# $@ = Name of the target (e.g., test_part1)
# $< = Name of the first dependency (e.g., test_part1.c)
test: test.c libftprintf/libftprintf.a
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS) $(LDLIBS)

libftprintf/libftprintf.a:
	$(MAKE) -C libftprintf

clean:
	rm -f $(TARGETS)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
