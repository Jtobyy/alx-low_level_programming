#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 *struct dog - defines a new struct dog type
 *@name: name of dog
 *@age: its age
 *@owner: its owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
