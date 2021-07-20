#include "dog.h"

char *copy_(char *to, char *from);

/**
 *new_dog - creates a new dog
 *@name: name of dog
 *@age: it's age
 *@owner: it's owner
 *Return: pointer to a new dog variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i;
int k;
char *n_n;
char *n_o;
dog_t *n_d;
if (name == NULL)
{
name = malloc(sizeof(char) * 1);
name[0] = '\0';
}
if (owner == NULL)
{
owner = malloc(sizeof(char) * 1);
owner[0] = '\0';
}
i = 0;
k = 0;
while (name[i] != '\0')
i++;
n_n = malloc(sizeof(*n_n) * (i + 1));
if (n_n == NULL)
return (NULL);
n_n = copy_(n_n, name);
while (owner[k] != '\0')
k++;
n_o = malloc(sizeof(*n_o) * (k + 1));
if (n_o == NULL)
return (NULL);
n_o = copy_(n_o, owner);
n_d = malloc(sizeof(dog_t));
if (n_d == NULL)
return (NULL);
n_d->name = n_n;
n_d->age = age;
n_d->owner = n_o;
return (n_d);
}

/**
 *copy_ - copy's characters from one memory to another
 *@to: destination
 *@from: source
 *Return: pointer to "to"
 */
char *copy_(char *to, char *from)
{
int j;
for (j = 0; from[j] != '\0'; j++)
to[j] = from[j];
to[j] = '\0';
return (to);
}
