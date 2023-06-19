#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase, and then in uppercase
 * Return: Invariably 0 (Success)
 */

int main(void)
{
	char m = 'a';
	char n = 'A';

	while
		(m <= 'z') {
			putchar(m);
			m++;
		}
	while
		(n <= 'Z') {
			putchar(n);
			n++;
		}
	putchar('\n');
	return (0);
}
