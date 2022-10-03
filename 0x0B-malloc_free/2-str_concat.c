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
if (concat_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat_str[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat_str[concat_index++] = s2[index];

	return (concat_str);
}
