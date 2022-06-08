#include "main.h"
/**
 *main - print out the putchar
 * Description: return the required results
 * Return: return integer value 0
 */
int print_alphabet_x10(void)
{
        char i;
        int k;

        for (k = 0; k < 10; k++)
        {
                for (i = 'a'; i <= 'z'; i++)
                        _putchar(i);
                _putchar(10);
        }
        return (0);
}
