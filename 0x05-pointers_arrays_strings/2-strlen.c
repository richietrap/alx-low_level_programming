#include "main.h"

/**
 * _strlen - returns lenth of a string
 * @s: char for checking
 * Description: will return length of the string
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
