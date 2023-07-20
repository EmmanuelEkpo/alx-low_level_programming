#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1;
	int digit2;
	int comma;

	comma = 44;
	for (digit1 = 48; digit1 <= 57; digit1++)
	{
		for (digit2 = 49; digit2 <= 57; digit2++)
		{
			if (digit1 != digit2 && digit2 > digit1)
			{
				putchar(digit1);
				putchar(digit2);

				if (digit1 != 56 || digit2 != 57)
				{
					putchar(comma);
					putchar(' ');
				}
			}
		}
	}
	putchar(10);

	return (0);
}
