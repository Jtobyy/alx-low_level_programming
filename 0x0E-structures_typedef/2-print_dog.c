#include "dog.h"
#include <stdlib.h>

/**
 *print_dog - prints a struct dog
 *@d: variable
 *Return: void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
printf("(nil)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %6f\n", d->age);
if (d->owner == NULL)
printf("(nil)\n");
else
printf("Owner: %s\n", d->owner);
return;
}
