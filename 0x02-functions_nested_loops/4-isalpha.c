#include "main.h"
/**
 * _isalpha - Function that checks for alphabetic character
 * @c: Character in ASCII code
 * Return: 1 if it is an alphabet, 0 for others
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
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
