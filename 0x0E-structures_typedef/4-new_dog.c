#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* new_dog - Creates a new dog
* @name: The name of the dog
* @age: The age of the dog
* @owner: The owner of the dog
*
* Return: A pointer to the new dog, or NULL if the function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int name_length, owner_length, i;
/* Calculate the length of name and owner strings */
for (name_length = 0; name[name_length]; name_length++)
;
for (owner_length = 0; owner[owner_length]; owner_length++)
;
/* Allocate memory for the new dog */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
/* Allocate memory for the name and owner strings */
new_dog->name = malloc(sizeof(char) * (name_length + 1));
new_dog->owner = malloc(sizeof(char) * (owner_length + 1));
if (new_dog->name == NULL || new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog->owner);
free(new_dog);
return (NULL);
}
/* Copy the name and owner strings to the new dog */
for (i = 0; i <= name_length; i++)
new_dog->name[i] = name[i];
for (i = 0; i <= owner_length; i++)
new_dog->owner[i] = owner[i];
new_dog->age = age;
return (new_dog);
}
