#include "main.h"
/**
 * _isupper - Function that checks for uppercase character
 *
 * @c: Character input
 * Return: If true return 1, else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
