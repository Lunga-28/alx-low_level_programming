#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - this will  create a file
 * @filename: ...
 * @text_content: things to add to the file.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int err_code, len, file_descriptor;

	err_code = len = file_descriptor = 0;
	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
		if (file_descriptor < 0)
			return (-1);
	while (text_content && text_content[len])
		len++;

	err_code = write(file_descriptor, text_content, len);
	if (err_code < 0)
		return (-1);
	close(file_descriptor);
	return (1);
}
