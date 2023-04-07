# include "main.h"

/**
 * read_textfile - Function to read a text file
 * @filename: Variable for the file to be opened
 * @letters: Variable for number of characters to read
 *
 * Return: actual number of letters available that
 *				could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int read_file, open_file;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		return (0);
	}

	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
	{
		return (0);
	}

	read_file = read(open_file, buffer, letters);
	if (read_file < 0)
	{
		close(open_file);
		free(buffer);
		return (0);
	}

	if (write(STDOUT_FILENO, buffer, read_file) < 0)
	{
		close(open_file);
		free(buffer);
		return (0);
	}

	free(buffer);
	close(open_file);

	return (read_file);
}
