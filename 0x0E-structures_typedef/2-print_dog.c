#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: dog struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
