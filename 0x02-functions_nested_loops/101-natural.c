#include <stdio.h>

/**
 * main - lists all natural numbers below 1024
 * 	excluding multiples of 3 or 5
 *
 * 	return: 0
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
