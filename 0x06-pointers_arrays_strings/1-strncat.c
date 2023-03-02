/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0, i;

    /* Get the length of dest */
    while (dest[dest_len] != '\0')
        dest_len++;

    /* Append the first n bytes of src to dest */
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];

    /* Add null terminator to dest */
    dest[dest_len + i] = '\0';

    return dest;
}
