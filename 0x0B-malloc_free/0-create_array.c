#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an aray of chars
 * @size: size of the array
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + 1) = c;
		i++;
	}

	*(p + 1) = '\0';

	return (p);
}
