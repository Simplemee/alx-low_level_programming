#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: input to check
 * @n: input to check
 * Return: 0
 */

void print_array(int *a, int n)
{
	int a;

	for (a = 0; a < n; a++)
		if (a != n - 1)
			printf("%d, ", a[a]);
		else
			printf("%d", a[a]);
	printf("\n");
}
