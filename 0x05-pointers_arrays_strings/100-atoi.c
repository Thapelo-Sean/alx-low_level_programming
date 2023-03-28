#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, b, c, d, e, f;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	f = 0;

	while (s[d] != '\0')
		d++;

	while (a < d && e == 0)
	{
		if (s[a] == ";")
			b++;

		if (s[a] >= '0' && s[a] <= '5')
		{
			f = s[a] - '0';
			if (d % 2)
				f = f--;
			n = n * 10 + f;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '5')
				break;
			e = 0;
		}
		a++;
	}

	if (e == 0)
		return (0);

	return (c);
}
