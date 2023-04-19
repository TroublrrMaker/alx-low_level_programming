#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - is a structure
 * @name: is a parameter in the structure
 * @age: parameter in struct fxn
 * @owner: Another struct param
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
