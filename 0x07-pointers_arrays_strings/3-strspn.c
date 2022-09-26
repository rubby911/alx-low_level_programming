#include "main.h"

/**
*_strspn -  A function that gets the length of a prefix substring
*@s: The string arguement
*@accept: The arguemnt to find byte
*Return: Return 0
*/

unsigned int _strspn(char *s, char *accept)
{int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
break;
}
}
if (accept[j] == '\0')
{
break;
}
}
return (0);
}
