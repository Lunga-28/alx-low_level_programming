/**
 * _atoi - converts a string to an integer
 *
 * @s: pointer to string
 *
 * Return: integer value of string
 */
int _atoi(char *s)
{
    int sign = 1, result = 0;
    char *p = s;

    while (*p != '\0')
    {
        if (*p == '-')
        {
            sign = -sign;
        }
        else if (*p >= '0' && *p <= '9')
        {
            result = result * 10 + (*p - '0');
        }
        else if (result > 0)
        {
            /* we have found a non-numeric character after the number */
            break;
        }

        p++;
    }

    return result * sign;
}