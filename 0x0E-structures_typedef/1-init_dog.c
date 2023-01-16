#include "dog.h"
/**
 * init_dog- This is the init_dog function
 * Description: This function initializes a dog variable
 * @d: This is the dog type parameter
 * @name: This is the name of the dog
 * @age: This is the age of the dog
 * @owner: this is the owner's name
 * Return: returns nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
