#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
int main(void)
{
	struct dog my_dog;

	init_dog(NULL, "poppy", 3.5, "Bob");
	printf("%s\n%.1f\n%s",my_dog->name, my_dog->age, my_dog->owner);
	return (0);
}
