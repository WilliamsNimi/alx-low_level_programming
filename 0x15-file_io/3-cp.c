#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
/**
 * main- This is the main function
 * Description: This function copies file content from one to another
 * @argc: Number of arguments passed to the main function
 * @argv: List of the arguments passed
 * Return: Returns 0
 */
int main(int argc, char *argv[])
{
	FILE *file_to, *file_from;
	char c;
	int fd1, fd2;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = fopen(argv[1], "r");
	fd1 = open(argv[1], O_RDONLY);
	if (file_from == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = fopen(argv[2], "w+");
	fd2 = open(argv[2], O_WRONLY);
	if (file_to == NULL)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
	}
	c = fgetc(file_from);
	while (c != EOF)
	{
		fputc(c, file_to);
		c = fgetc(file_from);
	}
	if (close(fd1) < 0)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) < 0)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	fclose(file_from);
	fclose(file_to);
	return (0);
}
