#include "main.h"

/**
 * _isalpha - check if the character is an alphabet
 * @c: the character to be be confirmed
 *
 * Return: 1 if  character is letter, lowercase or uppercae, 0 otherwise.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

