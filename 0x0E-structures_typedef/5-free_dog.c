#include "dog.h"
#include "stdlib.h"
/**
 * free_dog- This is the free dog function
 * Description: This function frees memory assigned to the dog struct
 * @d: The dog struct
 * Return: It returns nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
