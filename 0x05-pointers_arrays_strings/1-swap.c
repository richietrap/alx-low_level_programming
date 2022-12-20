#include "main.h"
/**
 * swap_int - swaps the value of both integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int s;

	 s = *a;
	 *a = *b;
	 *b = s;
}
