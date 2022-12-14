#include "main.h"

/**
 * _islower - checks if a character is in lowercase
 * @c: the character to be checked
 * return: 1 if character is lowrcase, or 0 if it's not
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
