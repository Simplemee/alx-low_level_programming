#include <stdio.h>
#include "main.h

/**
 * main - Prints numbers from 1 to 100. 
 * 	for multiples of three print Fizz
 * 	for multiples of five print Buzz
 * 	For multiples of both print FizzBuzz
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
			printf("FizzBuzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else
			printf("%d", x);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

