#include "dog.h"

/**
 *init_dog - initialize a variable of type struct dog
 *@d: variable
 *@name: name of dog
 *@age: it's age
 *@owner: it's owner
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
if (name == NULL)
d->name = " ";
else
d->name = name;
if (owner == NULL)
d->owner = " ";
else
d->owner = owner;
d->age = age;
return;
}
