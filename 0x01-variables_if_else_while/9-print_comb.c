#include <stdio.h>
/**
 * main - Entry point
 * Return: Invariably 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
