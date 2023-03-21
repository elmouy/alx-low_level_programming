#include "main.h"

/**
 * _islower - checks for alphabetic character
 * @c:is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        {
                return (1);
        }
        else
                return (0);
