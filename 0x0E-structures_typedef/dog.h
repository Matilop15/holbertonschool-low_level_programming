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
/**
 *dog_t - typedef for dog type estructure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
