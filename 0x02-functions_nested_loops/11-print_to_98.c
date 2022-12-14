#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98 in an orderly manner
 * @n: The number to begin counting with
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
