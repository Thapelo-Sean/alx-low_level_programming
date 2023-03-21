#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
        char myChar;
        int i;

        i = 0;

        while (i < 10)
        {
                myChar = 'a';
                while (myChar <= 'z')
                {
                        _putchar(myChar);
                        myChar++;
                }
                _putchar('\n');
                i++;
        }
}
