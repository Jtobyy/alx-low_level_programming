#include "dog.h"

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
int j;
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
for (j = 0; j < i; j++)
n_n[j] = name[j];
n_n[j] = '\0';
while (owner[k] != '\0')
k++;
n_o = malloc(sizeof(*n_o) * (k + 1));
if (n_o == NULL)
return (NULL);
for (j = 0; j < i; j++)
n_o[j] = name[j];
n_o[j] = '\0';
n_d = malloc(sizeof(dog_t));
if (n_d == NULL)
return (NULL);
n_d->name = n_n;
n_d->age = age;
n_d->owner = n_o;
return (n_d);
}
