#include <unistd.h>

/**
 * _puts - prints a string to stdout followed by a new line
 * @str: the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
int len = 0;

while (str[len])
len++;

write(STDOUT_FILENO, str, len);
write(STDOUT_FILENO, "\n", 1);
}