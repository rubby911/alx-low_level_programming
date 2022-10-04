#include "main.h"
#include <stdlib.h>

/**
 * wrdcnt - counts the number of words in a string
 * @s: string to count
 *
 * Return: int of number of words
 */
int wrdcnt (char *s)
{int count;
int i;
i = count = 0;
while (str[i] != '\0')
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
{
count++;
i++;
}
i++;
return (count);
}


/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */


char **strtow (char *str)
{char **nstr;
int words, i, j, k, cur_words, *sizes;
if (str == NULL || *str == '\0')
{
return (NULL);
}
words = word_count(str);
sizes = malloc(words * sizeof(int));
if (sizes == NULL)
{
return (NULL);
}
sizes = find_words_len(str, words);
nstr = malloc((words + 1) * sizeof(char *));
if (nstr == NULL)
{
return (NULL);
}
i = j = k = 0;
while (i < words && str[j] != '\0')
{
cur_words = i;
nstr[i] = malloc(sizes[i] + sizeof(char));
if (nstr[i] == NULL)
{
for (i = i - 1; i >= 0; i--){
free(nstr[i--]);
free(nstr);
return (NULL);
}
}
while (str[j] != '\0' && i == cur_words)
{
if (str[j] != ' ')
{
while (str[j] != '\0' && str[j] != ' ')			{
nstr[i][k] = str[j]; j++; k++;				}
nstr[i][k] = '\0'; i++; k = 0;
}
j++;
}
}
	nstr[i] = NULL;	free(sizes);
	return (nstr);
}
}

