#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int type_int;
float type_float;
char type_char;
long long type_very_long;
long type_long;
printf("Size of a char:%zu byte(s)\n", sizeof(type_char));
printf("Size of an int: %zu byte(s)\n", sizeof(type_int));
printf("Size of a long int: %zu byte(s)\n", sizeof(type_long));
printf("Size of a long long int: %zu byte(s)\n", sizeof(type_very_long));
printf("Size of a float: %zu byte(s)\n", sizeof(type_float));
return (0);
}
