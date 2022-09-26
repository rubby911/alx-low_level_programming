#include "main.h"

/**
**_memcpy -  A function that copies memory area.
*@dest:  Memory where value is stored
*@src: Memory to be copied
*@n: Number of bytes
*Return: Returns copied memory and bite
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{int i, j;
while (n > 0)
{
dest[i] = src[i];
i++;
j++;
n--;
}
return (dest);
}

