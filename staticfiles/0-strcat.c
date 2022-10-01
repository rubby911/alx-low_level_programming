#include "main.h"

/**
**_strcat - a function that concatenates two strings.
*@dest: One of the string to be concatenated
*@src: The second string to be concatenated
*Return: Pointer to the given string
*/

char *_strcat(char *dest, char *src)
{int a, b;
a = 0;
b = 0;
for (; dest[a] != '\0'; a++)
{
a++;
}
for (; src[b] != '\0'; b++)
{
dest[a + b] = src[b];
}
return (dest);
}
