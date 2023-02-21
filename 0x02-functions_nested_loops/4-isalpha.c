#include <stdio.h>
#include <unistd.h>
/**
 * _islower - checks for lowercase characters
 *
 * Description: prints alphabet characters
 * Return: return 1 if c is an alphabet character and 0 if otherwise
 */
int _islower(int c)
{
        if ((c >=65 && c <=90) || (c >= 97 && c <= 122))
        {
                return (1);
        }
        return (0);
}              
