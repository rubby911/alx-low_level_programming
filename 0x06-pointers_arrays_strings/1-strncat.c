#include "main.h"

/**
**_strncat - a function that concatenates two strings
*@dest: A place holder
*@src: Another place holder
*@n: An interger value
*Return: return a concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{unsigned int a;
for (a = 0; a < n; a++)
{*(dest + a) = *(src + a);
}
return (dest);
}
