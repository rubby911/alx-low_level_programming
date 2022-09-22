#include "main.h"

/**
**cap_string - capitalizes all words of a string.
*@values: Place holder for arguement
*Return: Returns 0
*/


char *cap_string(char *values)
{int i = 0;
int j;
char exceptions[] = "\t\n,;.!\"(){}";
while (*(values + i))
{
if (*(values + i) >= 'a' && *(values + i) <= 'z')
{
if (i == 0)
{
*(values + i) -= 'a' - 'A';
}
else
{
for (j = 0; j <= 12; j++)
{
if (exceptions[j] == *(values + i - 1))
{
*(values + i) -= 'a' - 'A';
}
}
}
i++;
}
}
return (values);
}

