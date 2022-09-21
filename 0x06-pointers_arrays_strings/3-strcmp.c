#include "main.h"

/**
*_strcmp - A functions that compare 2 given strings
*@s1: Arguement pointer
*@s2: Argument 2 pointer
*Return: Return value is 0
*/

int _strcmp(char *s1, char *s2)
{int i = 0;
for (; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
return (0);
}
