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

	printf("Size of char: %c byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of int: %d byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of long int: %ld byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of long long int: %lld byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of float: %f byte(s)\n", (unsigned long)sizeof(z));
	return (0);
}
