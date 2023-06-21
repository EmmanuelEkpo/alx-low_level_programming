#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @y: The integer to extract the last digit from
 * Return: Value of last digit
 */

int print_last_digit(int y)
{
	int x = y % 10;

	if (y < 0)
	{
		y = -y;
	}
	if (x < 0)
	{
		x = -x;
	}
	_putchar(x + '0');
	return (x);
}
