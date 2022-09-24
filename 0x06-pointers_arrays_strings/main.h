#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
void print_buffer(char *b, int size);
int _putchar(char c);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_number(int n);
char *rot13(char *);
char *leet(char *);
char *cap_string(char *);
char *string_toupper(char *);
void reverse_array(int *a, int n);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
#endif /* MAIN_H */
