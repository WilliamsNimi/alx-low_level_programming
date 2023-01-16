#ifndef dog.h
#include <stdio.h>
/**
 * struct dog - This is a dog struct
 * @name: Every dog must have a name
 * @age: Every dog must have an age
 * @owner: Every dog must have an owner
 *
 * Description: This struct defines a dog with a name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
