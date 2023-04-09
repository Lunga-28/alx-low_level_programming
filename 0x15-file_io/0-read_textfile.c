#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

/**
* read_textfile - fuction that read a text file and print it out
* the POSIX std out
* @filename: body of text to print.
* @letters: max char to print.
* Return: number of chars printed.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_descriptor, error, read_count;
char *buffer;

file_descriptor = error = read_count = 0;
if (!filename || !letters)
return (0);
file_descriptor = open(filename, O_RDONLY);
if (file_descriptor < 0)
return (0);

buffer = malloc(sizeof(char) * letters + 1);
if (!buffer)
return (0);
read_count = read(file_descriptor, buffer, letters);
if (read_count < 0)
{
free(buffer);
return (0);
}
buffer[letters] = '\0';
error = write(STDOUT_FILENO, buffer, read_count);
if (error <= 0)
{
free(buffer);
return (0);
}

free(buffer);
close(file_descriptor);
return (read_count);
}
