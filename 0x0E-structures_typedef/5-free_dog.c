#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees mem of struct dog
 * @d: struct dog
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
