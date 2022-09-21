#include "main.h"

/**
**_strcat - a function that concatenates two strings.
*@dest: One of the string to be concatenated
*@src: The second string to be concatenated
*Return: Pointer to the given string
*/

char *_strcat(char *dest, char *src)
{int a, b, length;
a = 0;
b = 0;

while (dest[a] != '\0')
{a++;
}
while (src[b] != '\0')
{
b++;
}
length = 12;
b = 0;
while (b < length)
{
dest[b] = src[a];
a++;
b++;
}
return (dest);
}
