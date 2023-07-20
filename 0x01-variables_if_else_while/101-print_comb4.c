#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints possible different combinations of three digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1;
	int digit2;
	int digit3;

	for (digit1 = 48; digit1 <= 57; digit1++)
	{
		for (digit2 = 49; digit2 <= 57; digit2++)
		{
			for (digit3 = 50; digit3 <= 57; digit3++)
			{
				if ((digit1 != digit2) && (digit2 != digit3) &&
						(digit3 > digit2) && (digit2 > digit1))
				{
					putchar(digit1);
					putchar(digit2);
					putchar(digit3);

					if (digit1 != 55 || digit2 != 56 || digit3 != 57)
					{
						putchar(44);
						putchar(' ');
					}
				}
			}
		}
	}
	putchar(10);

	return (0);
}
