#include "main.h"
#include <stdlib.h>
/**
 * argstostr- This is the argstostr function
 *
 * Description: This function concatenates all the arguments of a function
 * @ac: number of arguments
 * @av: The arguments to be concatenated
 * Return: Returns a pointer to a string
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *new_string;

	if (ac == 0 || av == NULL)
		return (NULL);
	new_string = (char *)malloc(ac * sizeof(char *));

	for (i = 0; i < ac; i++)
	{
		new_string[i] = av[i];
	}
	return (new_string);
}
