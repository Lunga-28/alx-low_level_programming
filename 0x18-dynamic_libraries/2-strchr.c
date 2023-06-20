#include <stdio.h>
/**
 * _strchr - locate character in string
 * @s: pointer to string
 * @c: character to find
 *
 * Return: pointer to first occurrence of c in s or NULL if not found
 */
char *_strchr(char *s, char c)
{
        while (*s != '\0')
        {
                if (*s == c)
                        return (s);
                s++;
        }
        if (*s == c)
                return (s);
        return (NULL);
}
