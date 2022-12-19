#include "main.h"
/**
 * puts2 - prints every other character of a string starting with the first
 * @str: input to look out for
 * Return: print
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\n'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
