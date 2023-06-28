#include "main.h"

/**
 * print_line - Function that draws a straight line
 * @n: Number of times char will be printed
 * Return: Invariably 0 (Success)
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
