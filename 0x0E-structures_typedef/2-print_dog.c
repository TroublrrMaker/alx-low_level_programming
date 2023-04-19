#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Fxn prints the details of the dog
 * @d:struct to print
 */

void print_dog(struct dog *d)
{
if (d->name == NULL)
{
printf("Name: (nil)");
}

else if (d->age == 0)
{
printf("Age: (nil)");
}

else if (d->owner == NULL)
{
printf("Owner: (nil)");
}

else if (d == NULL)
{
printf(" ");
}
printf("Name: %s\nAge: %f\nOwner: %s\n",d->name, d->age, d->owner);
}
