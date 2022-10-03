#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2-dimensional arra
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 * Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{int **dimensional_array;
int height_i, width_i;
if (width <= 0 || height <= 0)
{
return (NULL);
}
dimensional_array = malloc(sizeof(int *) * height);
if (dimensional_array == NULL)
{
return (NULL);
}
for (height_i = 0; height_i < height; height_i++)
{
dimensional_array[height_i] = malloc(sizeof(int) * width);
if (dimensional_array[height_i] == NULL)
{
for (; height_i >= 0; height_i--)
{
free(dimensional_array[height_i]);
}
free(dimensional_array);
return (NULL);
}
}
for (height_i = 0; height_i < height; height_i++)
{
for (width_i = 0; width_i < width; width_i++)
{
dimensional_array[height_i][width_i] = 0;
}
}
return (dimensional_array);
}
