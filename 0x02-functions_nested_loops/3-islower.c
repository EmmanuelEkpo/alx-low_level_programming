#include "main.h"
/**
 * _islower - Function that checks for lowercase character
 * @c: The character in ASCII code
 * Return: 1 for lower case character. 0 for others.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
