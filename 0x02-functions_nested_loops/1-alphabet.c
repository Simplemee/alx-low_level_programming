#include <main.h>

/**
 * print_alphabet: prints lowercase alphabets followed by a new line
 * Retutn: 0
 */

void print_alphabet(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)

		_putchar(lower_case);

	_putchar('\n');
}
