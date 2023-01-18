#include <stdio.h>
#include "function_pointers.h"
int is_98(int elem)
{
	return(98 == elem);
}
int main(void)
{
	int index;
	int array[3] = {0, -98, 98};

	index = int_index(array, 3, is_98);
	printf("%d\n",index);
	return (0);
}
