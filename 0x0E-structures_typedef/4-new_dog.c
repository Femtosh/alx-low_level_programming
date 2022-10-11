#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: Name
 * @age: Age
 * @owner: Owner
 * Desription: free memory for struct
 */

dog_t *new_dog(char *name, float age, char *owner);
{
	dog_t *doggs;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggs = malloc(sizeof(dog_t));
	if (doggs == NULL)
		return (NULL);
	doggs->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggs->name == NULL)
	{
		free(doggs);
		return (NULL);
	}
	doggs->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggs->owner == NULL)
	{
		free(doggs->name);
		free(doggs);
		return (NULL);
	}
	doggs->name = _strcopy(doggs->name, name);
	doggs->age = age;
	doggs->owner = _strcopy(doggs->owner, owner);

	return (doggs);
}
