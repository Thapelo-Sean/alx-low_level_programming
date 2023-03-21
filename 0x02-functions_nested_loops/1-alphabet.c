#include <stdio.h>

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	char myChar = 'a';

	while (myChar <= 'z')
	{
		_putchar(myChar);
		myChar++;

	}
	_putchar('\n');

}
