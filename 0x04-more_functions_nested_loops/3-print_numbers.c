#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9, followed by a new line
 *
 * Return: 0
 */

void print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
}