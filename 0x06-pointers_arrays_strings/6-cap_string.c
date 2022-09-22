#include "main.h"

/**
**cap_string - capitalizes all words of a string.
*@values: Place holder for arguement
*Return: Returns
*/


char *cap_string(char *values)
{int i = 0;
for (i = 0; values[i] != '\0'; i++)
if (values[i] == ' '
|| values[i] == '\t'
|| values[i] == '\n'
|| values[i] == '.'
|| values[i] == ','
|| values[i] == '!'
|| values[i] == '?'
|| values[i] == '"'
|| values[i] == '('
|| values[i] == ')'
|| values[i] == '}'
|| values[i] == '}'
)
{
i++;
if (values[i] >= 'A' && values[i] <= 'Z')
{
i++;
}
else if (values[i] >= 'a' && values[i] <= 'z')
{
values[i] = values[i] - 32;
i--;
}
else if (values[0] >= 'a' && values[0] <= 'z')
{
values[0] = values[0] - 32;
}
}
return (values);
}
