#include "main.h"
#include <stdlib.h>

/**
 * _calloc - reserves memory for an array of @num_elements elements,
 * with each element having a size of @element_size bytes, and returns a
 * pointer to the allocated memory.
 * @nmemb: number of elements to allocate memory for
 * @size: size of each element in bytes
 * Return: allocated memory's pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *allocated_memory;
	unsigned int index;
	if (nmemb == 0 || size == 0)
		return (NULL);
	allocated_memory = malloc(nmemb * size);
	if (allocated_memory == NULL)
		return (NULL);
	for (index = 0; index < (nmemb * size); index++)
		allocated_memory[index] = 0;
	return (allocated_memory);
}
