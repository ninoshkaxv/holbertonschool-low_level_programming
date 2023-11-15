#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to a struct dog to initialize
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description:
 * This function initializes a variable of type struct dog with the provided
 * name, age, and owner values. If the given pointer @d is NULL, it allocates
 * memory for a new struct dog using malloc. It is the responsibility of the
 * caller to free the allocated memory when it is no longer needed.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        d = malloc(sizeof(struct dog));

    d->name = name;
    d->age = age;
    d->owner = owner;
}

