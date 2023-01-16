#include <stdio.h>
/**
 * struct dog - This is a dog struct
 * @name: Every dog must have a name
 * @age: Every dog must have an age
 * @owner: Every dog must have an owner
 *
 * Description: This struct defines a dog with a name, age and owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
