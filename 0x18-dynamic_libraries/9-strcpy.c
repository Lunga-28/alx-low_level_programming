/**
 * _strcpy - Copies a string to a buffer
 * @dest: Pointer to buffer
 * @src: Pointer to string to be copied
 *
 * Return: Pointer to buffer
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}

dest[i] = '\0';

return (dest);
}