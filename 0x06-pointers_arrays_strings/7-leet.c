#include "main.h"

/**
**cap_string - capitalizes all words of a string.
*@values: Place holder for arguement
*Return: Returns 0
*/


char *leet(char *values)
{int i;
int j;
char first[] = "aeotlAEOTL";
char second[] = "4307143071";
for (i = 0; values[i] != '\0'; i++)
{
for (j = 0; first[j] != '\0'; j++)
{
if (values[i] == first[j])
values[i] = second[j];
}
}
return (values);
}
