#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("poppy", 3.5, "Bob");
	printf("%s\n%.1f\n%s",my_dog->name, my_dog->age, my_dog->owner);
	free_dog(my_dog);
	return (0);
}
