#include <stdio.h>
/**
 * main - Entry point
 * Return: Invariably 0 (Success)
 */

int main(void)
{
	char m = 'a';

	char n = 'q';

	char o = 'e';

	char p = 'z';

	while
		((m != n && m != o) && m <= p) {
			putchar(m);
			m++;
		}
	putchar('\n');
	return (0);
}
