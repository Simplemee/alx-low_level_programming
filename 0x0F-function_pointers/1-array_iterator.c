#include "function_pointers.h"

/**
 * array_iterator - a function given as a parameter
 * @array: array to execute
 * @size: is the size of the array
 * @action: the function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && action)
	{
		x = 0;
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
