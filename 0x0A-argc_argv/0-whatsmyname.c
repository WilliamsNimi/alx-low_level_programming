#include <stdio.h>
/**
 * main- This is the main function for printing a program name
 *
 * Description: This function prints the name of the program
 * @argc: the length of the arguments list
 * @argv: the list of all arguments
 * Return: Returns nothing
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
