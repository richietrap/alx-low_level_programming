#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 *
 * @s: the string to print
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pal_checker - checks if s i a palindrome
 * @s: string to check
 * @i: left index
 * @j: right index
 * Return: 1 if s is a palindrome, 0 if not
 */

int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - checkif s is palindrome
 * @s: string to check
 *
 * Return: 1 if n is prime, 0 if not
 */

int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
