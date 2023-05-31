#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 *
 */

int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
		putchar(reverse);

	putchar('\n');
	return (0);
}
