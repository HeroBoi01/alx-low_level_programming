/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;

/* Find the end of the destination string */
for (i = 0; dest[i] != '\0'; i++)
;

/* Concatenate the source string to the destination string */
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}

/* Add the terminating null byte */
dest[i] = '\0';

return (dest);
}
