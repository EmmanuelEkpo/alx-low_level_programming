#include <stdio.h>
/**
 * main - Entry point
 * Return: Invariably 0 (Success)
 */

int main(void)
{
	int y = 0;

	char x = 'a';

	while (y < 10)
	{
		putchar(y + '0');
		y++;
	}

	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
