#include <stdlib.h>
/**
* _strdup - duplicates a string
* @str: the string to duplicate
*
* Return: a pointer to the duplicated string, or NULL if memory is insufficient
*/
char *_strdup(char *str)
{
char *duplicate;
unsigned int length = 0;
unsigned int i;
if (str == NULL)
return (NULL);
while (str[length] != '\0')
length++;
duplicate = malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);
for (i = 0; i <= length; i++)
duplicate[i] = str[i];
return (duplicate);
}
