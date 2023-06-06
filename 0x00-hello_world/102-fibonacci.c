#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0.
 */
int main(void)
{
	int a;
	long int x, y, z;

	x = 1;
	y = 2;
	printf("%ld, %ld", x, y);
	for (a = 0; a < 48; a++)
	{
		z = x + y;
		printf(", %ld", z);
		x = y;
		y = z;
	}
	printf("\n");
	return (0);
}
