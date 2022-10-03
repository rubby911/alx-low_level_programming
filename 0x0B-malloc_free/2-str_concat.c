#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: First string  to be concatenated.
 * @s2: Second string to be concatenated to s1.
 * Return: If concatenation process fails returns NULL Else - a pointer to the ne */


char *str_concat(char *s1, char *s2)
{char *concat_string;
int i, concat_i = 0, length = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] || s2[i]; i++)
{
length++;
}
concat_string = malloc(sizeof(char) * length);
if (concat_string == NULL)
{
return (NULL);
}
for (i = 0; s1[i]; i++)
{
concat_string[concat_i++] = s1[i];
}
for (i = 0; s2[i]; i++)
{
concat_string[concat_i++] = s2[i];
}
return (concat_string);
}
}
