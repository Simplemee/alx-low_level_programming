#include "main.h"

/**
 * print_alphabet_x10(void) - prints 10x lowercase alphabets and a newline
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int x;
	char letters;

	for (x = 0; x <= 9; x++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)

			_putchar(letters);

		_putchar('\n');
	}
}
