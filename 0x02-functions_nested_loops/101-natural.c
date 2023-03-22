#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
        int i, sum = 0;
        char str[12];
        int len;

        for (i = 0; i < 1024; i++)
        {
                if ((i % 3) == 0 || (i % 5) == 0)
                        sum += i;
        }

        sprintf(str, "%d", sum);  // Convert integer sum to character string
        len = strlen(str);

        for (i = 0; i < len; i++)
        {
                putchar(str[i]);
        }

        putchar('\n');

        return (0);
}
