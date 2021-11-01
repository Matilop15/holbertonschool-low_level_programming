#include "dog.h"
#include <stdlib.h>

/**
*_strcpy - Copy string
*@dest: destination
*@src: source
*Return: pointer
*/
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != 0; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * new_dog - Create new dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer, NULL if not success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name;
	char *new_owner;
	int len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	len = 0;
	while (name[len] != '\0')
		len++;
	len++;
	new_name = malloc(len * sizeof(*owner));
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	len = 0;
	while (name[len] != '\0')
		len++;
	len++;
	new_owner = malloc(len * sizeof(*name));
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_name, name);
	_strcpy(new_owner, owner);
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
