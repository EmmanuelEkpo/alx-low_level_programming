#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: Size of array
 * @c: Character to assign
 * Return: Returns pointer to array, NULL if 0
 */

char *create_array(unsigned int size, char c)
{
	char *pointer2array;
	unsigned int count;

	pointer2array = malloc(size * sizeof(char));
	for (count = 0; count < size; count++)
	{
		pointer2array[count] = c;
	}
	if (size == 0 || pointer2array == NULL)
		return (NULL);
	return (pointer2array);
}
