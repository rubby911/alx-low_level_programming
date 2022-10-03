#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that return a pointer to a new allocated space in memory
 *taht contains copy of the string given as an arguement.
 * @str: The string to be copied.
 *
 * Return: If str is a NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{char *identical;
int i, length;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
length++;
}
identical = malloc(sizeof(char) * (length + 1));
if (identical == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
identical[i] = str[i];
}
identical[length] = '\0';
return (identical);
}
