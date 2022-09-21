#include "main.h"

/**
**_strncpy - copies strings
*@dest: A place holder
*@src: Another place holder
*@n: Value to copy
*Return: copied value
*/



char *_strncpy(char *dest, char *src, int n)
{int a, b;
a = b = 0;
while (src[b] != '\0')
{
b++;
}
if (b < n)
{
while (a < b)
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
else
{
while (a < n)
{
dest[a] = src[a];
a++;
}
}
return (dest);
}
