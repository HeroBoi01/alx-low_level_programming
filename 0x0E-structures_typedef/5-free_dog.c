#include <stdlib.h>
#include "dog.h"
/**
* free_dog - Frees the memory allocated for a dog
* @d: Pointer to the dog to free
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
/* Free the dynamically allocated strings first */
free(d->name);
free(d->owner);
/* Then free the dog structure itself */
free(d);
}
}
