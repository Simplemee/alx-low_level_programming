#include "main.h"

/**
 * _islower - Checks for characters in lowercase
 * @c: The character to be checked
 *
 * Return: 1 if character is lowercase, 0 if character is not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
