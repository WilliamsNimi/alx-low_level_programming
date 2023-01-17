#ifndef dog
#define dog
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
} dog_t;
#ifndef init_dog
#define init_dog
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
#ifndef print_dog
#define print_dog
void print_dog(struct dog *d);
#endif
#ifndef new_dog
#define new_dog
dog_t *new_dog(char *name, float age, char *owner);
#endif
#ifndef free_dog
#define free_dog
void free_dog(dog_t *d);
#endif
#endif
