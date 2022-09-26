#include "main.h"

/**
*_strspn -  A function that gets the length of a prefix substring
*@s: The string arguement
*@accept: The arguemnt to find byte
*Return: Return 0
*/

unsigned int _strspn(char *s, char *accept)
{int i;
unsigned int  j = 0;
while (*s)
{
for (i = 0; accepts[i]; i++)
{
if (*s == accepts[i])
{
j++;
break;
}
else if (accept[i + 1] == '\0')
{
return (j);
}
}
s++;
}
return (j);
}
