#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file- this is the create a file function
 * Description: This function creates a file
 * @filename: the name of the file to create
 * @text_content: The string to be written to the file
 * Return: Returns 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *new_file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		new_file = fopen(filename, "a");
		fclose(new_file);
		return (1);
	}
	new_file = fopen(filename, "a");
	if (new_file == NULL)
	{
		return (-1);
	}
	fprintf(new_file, "%s", text_content);
	fclose(new_file);
	return (1);
}
