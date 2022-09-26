#include "main.h"

/**
**_strchr - A function that locates a charcater in a string
*@s: The string to check for a character
*@c: The character to check
*Return: Returns 0
*/

char *_strchr(char *s, char c)
{int a = 0;
for (; s[a] != '\0'; a++)
{
if (s[a] == c)
{
return (&s[a]);
}
}
if (c == '\0')
{
return (&s[a]);
}
}

