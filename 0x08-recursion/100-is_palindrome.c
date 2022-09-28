#include "main.h"

/**
*_strlen_recursion - A function that finds the length of a  given string
*@s: The string to find its length
*Return: Return the length of the string
*/

int _strlen_recursion(char *s)
{int a;
a = 0;
if (*s != 0)
{
a++;
return (a + _strlen_recursion(s + 1));
}
return (a);
}

/**
*palindrome_checker- Function that checks check for palindrome
*@s: String to check
*@a: Length of string
*Return: Return 1 if it is a palindrome, 0 if not
*/

int palindrome_checker(char *s, int a)
{
if (a <= 1)
{
return (1);
}
if (*s != s[a - 1])
{
return (0);
}
else
{
return (palindrome_checker((s + 1), (a - 2)));
}
}

/**
* is_palindrome - A function that check if a string is a palindrome
*@s: String to check
*Return: 1 if palindrome, 0 otherwise
*/


int is_palindrome(char *s)
{int a;
a = _strlen_recursion(s);
if (a <= 1)
{
return (1);
}
return (palindrome_checker(s, a));
}
