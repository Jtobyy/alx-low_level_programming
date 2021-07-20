#include "dog.h"

/**
 *free_dog - frees up memory used by dog variable
 *@d: pointer to a dog variable
 *Return: void
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
return;
}
