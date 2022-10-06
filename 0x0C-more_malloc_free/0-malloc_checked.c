#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*malloc_checked - A function that allocates memory using malloc.
*@b: The vairiable that memory will be allocated too
*Return: Returns 0
*/

void *malloc_checked(unsigned int b)
{void *i;
i = malloc(b);
if (i == NULL)
{
exit(98);
}
return (i);
}
