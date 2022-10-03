#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars then
 *                initializes it with a char.
 * @size: The size of the array to be initialized.
 * @c: The  char to intialize the array with.
 *
 * Return: Returns 0 If size == 0 or the function fails - NULL.
 *         else returns a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{char *my_array;
unsigned int i;
if (size == 0)
{
return (NULL);
}
my_array = malloc(sizeof(char) * size);
if (my_array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
my_array[i] = c;
}
return (my_array);
}
