#include <stdio.h>
#include "ft_printf.h"

#define TEST_PRINTF(format, ...)               \
	do                                         \
	{                                          \
		printf("    %d    %d\n\n",             \
			   ft_printf(format, __VA_ARGS__), \
			   printf(format, __VA_ARGS__));   \
		fflush(stdout);                        \
	} while (0)

int main(void)
{
	int a[4];

	TEST_PRINTF("Donald's nephews are: %s, %s, and %s.\n",
		"Huey", "Dewey", "Louie");
	TEST_PRINTF(
		"Answer to the Ultimate Question of Life, the Universe, and Everything: %d.\n",
		42);
	TEST_PRINTF("%i%% %c %c %c\n", 100, 'a', 'b', 'c');
	TEST_PRINTF("%p %p %p %p\n", a, a + 1, a + 2, a + 3);
	TEST_PRINTF("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n",
		16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32);
	TEST_PRINTF("%x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x\n",
		16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32);
	TEST_PRINTF("%X %X %X %X %X %X %X %X %X %X %X %X %X %X %X %X %X\n",
		16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32);
	TEST_PRINTF("%x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x\n",
		0, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, 15, -16);
	TEST_PRINTF("%s\n", (char *)NULL);
	TEST_PRINTF("%p\n", NULL);
}
