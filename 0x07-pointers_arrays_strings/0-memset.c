#include "main.h"

/**
 * _memset - function that fills a block of memory with a specific value
 * @n: bytes of the memory area to be changed
 * @s: starting address of memory to be filled
 * @b: number of bytes to be changed
 *
 * Return: changed array with new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
