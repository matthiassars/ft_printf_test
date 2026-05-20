#include <stdio.h>
#include "ft_printf.h"

#define TEST_PRINTF(...)                   \
	{                                      \
		printf("\33[1;36m%d %d\33[0m\n\n", \
			   ft_printf(__VA_ARGS__),     \
			   printf(__VA_ARGS__));       \
		fflush(stdout);                    \
	}

int main(void)
{
	int a[4];
	char *nullchptr;

	TEST_PRINTF("Hello world!\n")
	TEST_PRINTF("Donald's nephews are %s, %s, and %s.\n",
				"Huey", "Dewey", "Louie")
	TEST_PRINTF(
		"Answer to the Ultimate Question of Life, the Universe, and Everything: %d.\n",
		42)
	TEST_PRINTF("%i%% %c %c %c\n",
				100, 'a', 'b', 'c')
	TEST_PRINTF("%d %i %u %d %i %u %d %i %u %d %i %u %d %i %u %d %i %u\n",
				16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 0xffffffff)
	TEST_PRINTF("%d %i %d %i %d %i %d %i %d %i %d %i %d %i %d %i %d %i\n",
				0, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16, -0x80000000)
	TEST_PRINTF("%x %X %x %X %x %X %x %X %x %X %x %X %x %X %x %X %x %X\n",
				16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 0xffffffff)
	TEST_PRINTF("%p %p %p %p\n", a, a + 1, a + 2, a + 3)
	nullchptr = (char *)NULL;
	TEST_PRINTF("%s %p\n", nullchptr, NULL)
	return (0);
}
