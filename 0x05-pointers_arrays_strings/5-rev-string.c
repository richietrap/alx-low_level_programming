#include "main.h"

/**
 * rev_string - reverses the string
 * _putchar - print each characte
 * @s: char to be checked
 *
 * Description: function will reverse a string
 * Return: 0
 */

void rev_string(char *s)
{
	int a = 0, b, c;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
