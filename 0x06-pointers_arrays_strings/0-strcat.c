#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	i = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	j = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		i++;
		j++;
	}

	dest[x] = '\0';
	return (dest);
}
