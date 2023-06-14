#include "main.h"

/**
 * factorial - factorial of a number
 * @n: the number
 * Return: factorial of the number
 */

int factorial(int n)
{
	int i = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	i *= factorial(n - 1);

	return (i);
}
