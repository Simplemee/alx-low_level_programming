#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 *
 */

int main(void)
{
	int n;
	char lower_case;

	for (n = 0; n <= 9; n++)
		putchar (n);
	for (lower_case = 'a'; lower_case <= 'f'; lower_case++)
		putchar (lower_case);
	putchar ('\n');

	return (0);
}
