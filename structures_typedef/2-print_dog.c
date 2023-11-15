#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints information about a struct dog
 * @d: Pointer to a struct dog to print
 *
 * Description:
 * This function prints the information about a dog, including its name, age,
 * and owner. If the provided struct pointer @d is NULL, the function returns
 * without printing anything. Additionally, if the name or owner is NULL, the
 * function substitutes "(nil)" for the corresponding field when printing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
