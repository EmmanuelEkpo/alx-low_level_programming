#include "main.h"
/**
 * _abs - Function that computes the absolute value of an integer
 * @x: Number to be computed
 * Return: Invariably 0 (Success)
 */

int _abs(int x)
{
	if (x < 0)
	{
		int abs_val;

		abs_val = x * -1;
		return (abs_val);
	}
	return (x);
}
