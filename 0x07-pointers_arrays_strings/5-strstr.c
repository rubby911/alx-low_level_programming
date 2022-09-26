#include "main.h"

/**
**_strstr - a function that locates a substring.
*@haystack: Arguement to locate a substring
*@needle: The substring to loacet
*Return: Retun the pointer to the beginning ot Null
*/


char *_strstr(char *haystack, char *needle)
{char *i = haystack;
char *j = needle;
while (*i)
{
j = needle;
i = haystack;
while (*j)
{
if (*i == *j)
{
j++;
i++;
}
else
{
break;
}
if (*j == '\0')
{
return (haystack);
haystack++;
}
}
}
return (0);
}
