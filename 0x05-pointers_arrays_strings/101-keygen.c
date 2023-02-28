#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random passwords for 101-crackme program
 *
 * Return: Always 0
 */
int main(void)
{
    int i, sum, n;
    char password[100] = {0};

    srand(time(0));
    sum = 0;
    i = 0;

    while (sum < 2772 - 122 && i < 98)
    {
        n = rand() % 62;
        if (n < 10)
            password[i] = '0' + n;
        else if (n < 36)
            password[i] = 'A' + n - 10;
        else
            password[i] = 'a' + n - 36;

        sum += (int)password[i];
        i++;
    }

    password[i] = (2772 - sum < 10) ? (2772 - sum + '0') :
                                      (i < 98) ? (2772 - sum - 10 + 'A') :
                                                 (2772 - sum - 10 + 'a');

    printf("%s\n", password);

    return (0);
}