#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Function init the struct; dog
 * @d: dog variable
 * @name: dog variable
 * @age: dog variable
 * @owner: dog variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
