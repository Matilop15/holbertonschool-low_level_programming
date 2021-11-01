#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - inicializando la variable dog
 *@d: no idea
 *@name: name of dog
 *@age: years old in float
 *@owner: yogui
 *Return: NOTHINg
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
