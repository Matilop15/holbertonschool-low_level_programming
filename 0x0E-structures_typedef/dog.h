#ifndef _DOG_H_
#define _DOG_H_
/**
 *struct dog - struct dog
 *@name: charrr
 *@age: floaattt
 *@owner: charrrr
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
