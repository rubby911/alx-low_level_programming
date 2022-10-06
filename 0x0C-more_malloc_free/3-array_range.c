#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: The address of memory the memory that will be printed
 * @max: the size of the memory that will be printed
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int a;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == 0)
		return (NULL);
	for (a = 0; min <= max; min++, a++)
		p[a] = min;
	return (p);
}
