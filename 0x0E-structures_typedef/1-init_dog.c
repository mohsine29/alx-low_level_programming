#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		dog.name = name;
		dog.age = age;
		dog.owner = owner;
	}
}
