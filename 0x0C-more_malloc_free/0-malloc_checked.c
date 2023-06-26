#include <main.h>

/**
 * *malloc_checked - Using malloc to allocate memory and exit if failed
 * @b: memory allocated
 * Return: pointer to the memory allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
