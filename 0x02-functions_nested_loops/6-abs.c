#include "main.h"

/**
 * main - computes the absolute value of an integer
 * @n: the integer to be computed
 *
 * return: the absolute value of the integer
*/

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
