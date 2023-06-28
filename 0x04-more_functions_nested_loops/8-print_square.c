#include "main.h"

/**
 * print_square - Prints the size of a square and a new line
 * @size:input integer tat is size of the square
 * Return: Invariably 0 (Success)
 */

void print_square(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
