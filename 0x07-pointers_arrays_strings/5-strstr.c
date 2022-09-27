#include "main.h"

/**
**_strstr - a function that locates a substring.
*@haystack: Arguement to locate a substring
*@needle: The substring to loacet
*Return: Retun the pointer to the beginning ot Null
*/


char *_strstr(char *haystack, char *needle)
{unsigned int i = 0, j = 0;
while (haystack[i])
{
while (needle[j] && (haystack[i] == needle[0]))
{
if (haystack[i + j] == needle[j])
{
j++;
}
else
{
break;
}
if (needle[j])
{
i++;
j = 0;
}
else
{
return (haystack + i);
}
}
return (0);
}
