#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 * @c: the character to look out for.
 *
 * Return: 1 if character is uppercase or lower case letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
