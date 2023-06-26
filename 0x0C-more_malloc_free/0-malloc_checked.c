#include <main.h>

/**
 * *malloc_checked - Using malloc to allocate memory and exit if failed
 * @b: memory allocated
 * Return: pointer to the memory allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);
	if (x == 0)
		exit(98);
	return (x);
}
