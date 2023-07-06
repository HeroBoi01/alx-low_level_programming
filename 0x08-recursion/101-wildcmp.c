#include "main.h"
/**
* wildcmp - Compares two strings and checks if they are identical
* @s1: The first string to compare
* @s2: The second string to compare
*
* Return: 1 if the strings are identical, 0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
return (1);
if (*s1 != '\0' && wildcmp(s1 + 1, s2))
return (1);
return (wildcmp(s1, s2 + 1));
}
if (*s1 != '\0' && (*s1 == *s2) && wildcmp(s1 + 1, s2 + 1))
return (1);
return (0);
}
