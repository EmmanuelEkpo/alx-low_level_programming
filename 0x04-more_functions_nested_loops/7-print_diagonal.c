#include "main.h"

/**
 * print_diagonal - Function that prints diagonal line on the terminal
 * @n: Input integer
 * Return: Invariably 0 (Success)
 */

void print_diagonal(int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		if (n > 1)
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
