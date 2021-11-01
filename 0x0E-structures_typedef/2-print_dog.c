#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *print_dog - if is nulll pring nil
 *@d: valoueeee
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("%s\n", d->name);
		if (d->age == '\0')
			printf("Age: (nil)\n");
		else
			printf("%f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
