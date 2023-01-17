#include "dog.h"
#include <stdlib.h>
/**
 * new_dog- A fuction of type dog_t
 * Description: This function creates a new dog
 * @name: The name of the new dog
 * @age: The age of the new dog
 * @owner: The owner of the new dog
 * Return: reurns a dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name2, *owner2;

	name2 = name;
	owner2 = owner;
	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = name2;
	dog->age = age;
	dog->owner = owner2;
	return (dog);
}
