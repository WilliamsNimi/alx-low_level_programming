#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name- This is the print_name function
 * Description: This function prints a name
 * @name: It takes a name as a parameter
 * @f: it takes a pointer to a function as parameter
 * Return: It returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	printf("%s\n", f(name));
}
