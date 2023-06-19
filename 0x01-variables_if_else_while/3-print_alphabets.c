#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase, and then in uppercase
 * Return: Invariably 0 (Success)
 */

int main(void)
{
	char m;

	char n;

	char m = 'a';
	char n = 'A';

	while
		(m <= 'a') {
			putchar(m);
			m++;
		}
	while
		(n <= 'A') {
			putchar(n);
			n++;
		}
	putchar('\n');
	return (0);
}
