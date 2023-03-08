/**
 * wildcmp - compares two strings and returns 1 if they can be considered
 * identical, otherwise return 0. This function allows the second string to
 * contain the special character *, which can replace any string (including
 * an empty string).
 * @s1: first string to compare
 * @s2: second string to compare (may contain * wildcard)
 *
 * Return: 1 if s1 and s2 can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
        return (1);

    if (*s2 == '*')
    {
        if (*s1 == '\0')
            return (wildcmp(s1, s2 + 1));

        return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
    }

    if (*s1 == *s2)
        return (wildcmp(s1 + 1, s2 + 1));

    return (0);
}
