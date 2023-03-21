#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a struct dog
 * @d: pointer to the struct dog to print
 *
 * Description: prints the elements of a struct dog or "(nil)" if they are NULL
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("age: %.6f\n", d->age);
		printf("owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
