#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 2)
	{
		dprintf(2, "Usage: %s filename\n", av[0]);
		exit(1);
	}
	n = read_textfile(av[1], 20);
	printf("\n(printed chars: %li)\n", n);
	return (0);
}
