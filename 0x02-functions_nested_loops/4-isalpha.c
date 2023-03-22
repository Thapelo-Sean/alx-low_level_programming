#include "main.h"

/**
 * _isalpha - check the code for alphabetic character
 *
 * Returns 1 if c is a letter, lowercase or uppercase
 *
 * Return 0 otherise
 */

int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
