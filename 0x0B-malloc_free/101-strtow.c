#include <stdlib.h>
#include <string.h>
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
int in_word = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && !in_word)
{
in_word = 1;
count++;
}
else if (str[i] == ' ')
{
in_word = 0;
}
}
return (count);
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
return (NULL);
num_words = count_words(str);
if (num_words == 0)
{
words = malloc(1 * sizeof(char *));
if (words == NULL)
return (NULL);
words[0] = NULL;
return (words);
}
words = malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
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
return (NULL);
}
strncpy(words[i], str + j, len);
words[i][len] = '\0';
j += len;
}
words[num_words] = NULL;
return (words);
}
