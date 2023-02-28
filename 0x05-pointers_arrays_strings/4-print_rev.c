
#include <unistd.h>

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
int len = 0;

while (s[len])
len++;

while (len--)
write(STDOUT_FILENO, &s[len], 1);

write(STDOUT_FILENO, "\n", 1);
}