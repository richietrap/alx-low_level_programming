#include "main.h"

/**
 * _memset - fills the first @n bytes of memory are
 * pointed to by @s with the constant byte @b
 *
 * @n: bytes of the memory pointed to by @s
 *
 * @b: memory area pointer
 *
 * @s: with the constant byte @b
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
