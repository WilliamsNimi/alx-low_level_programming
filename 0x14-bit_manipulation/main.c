#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main(void)
{
	unsigned long int n;

	n = 1024;
	set_bit(&n, 5);
	printf("%lu\n", n);

	return (0);
}
