#include <stdio.h>

/**
 * main - Program that finds and prints largest prime factor
 * Return: Invariably 0 (Success)
 */

int main(void)
{
	long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);

	return (0);
}
