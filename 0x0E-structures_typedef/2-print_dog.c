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
			printf("%s:(nil)\n", d->name);
		if (d->age == '\0')
			printf("%f:(nil)\n", d->age);
		if (d->owner == NULL)
			printf("%s:(nil)\n", d->owner);
	}
}
