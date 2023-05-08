#include "main.h"

/**
 * create_file - Function to create a text file
 * @filename: variable for the pointer to filename
 * @text_content: variable to the text context put in file
 *
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int open_file, write_file, size = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[size] != '\0')
		size++;

	open_file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (open_file == -1)
		return (-1);

	write_file = write(open_file, text_content, size);
	if (write_file == -1)
	{
		close(open_file);
		return (-1);
	}

	close(open_file);

	return (1);
}
