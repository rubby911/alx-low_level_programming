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
for (i = 0; *(values + 1); i++)
{
for (j = 0; j <= 9; j++)
{
if (first[j] == *(values + i))
{
*(values + i) = second[j];
}
}
}
return (values);
}

