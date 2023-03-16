#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	char a;
	int w;
	long int x;
	long long int y;
	float z;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(z));
	return (0);
}
