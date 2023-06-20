#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: Print all the alphabets in lower case
 * Return: Invariably 0 (Success)
 */

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
