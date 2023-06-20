#include "main.h"
/**
 * print_sign - Function that prints the sign of a number
 * @n: number to be checked
 * Return: 1 for postive number, -1 for negative number, 0 for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
