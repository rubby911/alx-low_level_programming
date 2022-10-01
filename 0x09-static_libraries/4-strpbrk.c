#include "main.h"
#include <stddef.h>

/**
**_strpbrk -  a function that searches a string for any of a set of bytes.
*@s: String to saerch
*@accept: Values to search for
*Return: Pointer to string
*/

char *_strpbrk(char *s, char *accept)
{
int a, b;
for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (accept[b] == s[a])
{
return (&s[a]);
}
}
}
return (NULL);
}

