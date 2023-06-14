#include "main.h"

/**
 * _pow_recursion - The value of x raised to the power of y
 * @x: the number
 * @y: the power
 * Return: The value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int value = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	value *= _pow_recursion(x, y - 1);

	return (value);
}
