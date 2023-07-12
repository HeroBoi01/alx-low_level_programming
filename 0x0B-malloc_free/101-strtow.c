#include <stdlib.h>
/**
* count_words - Counts the number of words in a string
* @str: The input string
*
* Return: The number of words
*/
int count_words(char *str)
{
int count = 0;
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
}
return count;
}
/**
* strtow - Splits a string into words
* @str: The input string
*
* Return: A pointer to an array of strings (words), or NULL on failure
*/
char **strtow(char *str)
{
char **words;
int num_words, i, j, k, len;
if (str == NULL || str[0] == '\0')
return NULL;
num_words = count_words(str);
words = malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
return NULL;
j = 0;
for (i = 0; i < num_words; i++)
{
while (str[j] == ' ')
j++;
len = 0;
while (str[j + len] != ' ' && str[j + len] != '\0')
len++;
words[i] = malloc((len + 1) * sizeof(char));
if (words[i] == NULL)
{
for (k = 0; k < i; k++)
free(words[k]);
free(words);
return NULL;
}
for (k = 0; k < len; k++)
words[i][k] = str[j++];
words[i][len] = '\0';
}
words[num_words] = NULL;
return words;
}
