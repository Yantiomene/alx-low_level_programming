#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: the pointer to the struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int i, l1, l2;

	my_dog = malloc(sizeof(*my_dog));
	if (my_dog == NULL || !(name) || !(owner))
	{
		free(my_dog);
		return (NULL);
	}

	for (l1 = 0; name[l1] != '\0'; l1++)
		;
	for (l2 = 0; owner[l2] != '\0'; l2++)
		;
	my_dog->name = malloc(l1 + 1);
	my_dog->owner = malloc(l2 + 1);

	if (!(my_dog->name) || !(my_dog->owner))
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}

	for (i = 0; i < l1; i++)
		my_dog->name[i] = name[i];
	my_dog->name[i] = '\0';
	my_dog->age = age;
	for (i = 0; i < l2; i++)
		my_dog->owner[i] = owner[i];
	my_dog->owner[i] = '\0';
	return (my_dog);
}
