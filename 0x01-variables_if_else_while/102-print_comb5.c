#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 0; digit1 < 100; digit1++)
	{
		for (digit2 = 0; digit2 < 100; digit2++)
		{
			if (digit1 < digit2)
			{
				putchar((digit1 / 10) + 48);
				putchar((digit1 % 10) + 48);
				putchar(' ');
				putchar((digit2 / 10) + 48);
				putchar((digit2 % 10) + 48);

				if (digit1 != 98 || digit2 != 99)
				{
					putchar(44);
					putchar(' ');
				}
			}
		}
	}
	putchar(10);

	return (0);
}
