#include <stdlib.h>
/**
* argstostr - concatenates all the arguments of a program
* @ac: the argument count
* @av: the argument vector
*
* Return: a pointer to the concatenated string, or NULL on failure
*/
char *argstostr(int ac, char **av)
{
char *concatenated;
int i;
int length = 0;
int total_length = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
length = 0;
while (av[i][length] != '\0')
{
length++;
total_length++;
}
total_length++;
}
concatenated = malloc((total_length + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);
total_length = 0;
for (i = 0; i < ac; i++)
{
length = 0;
while (av[i][length] != '\0')
{
concatenated[total_length] = av[i][length];
length++;
total_length++;
}
concatenated[total_length] = '\n';
total_length++;
}
concatenated[total_length] = '\0';
return (concatenated);
}
