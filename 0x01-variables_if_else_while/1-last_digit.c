#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always (0)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	/* your code goes there */
	if (n > 5)
	printf("Last digit of %i is %i and is greater than 5\n", n, m);
	else if (m == 0)
	printf("Last digit of %i is %i and is 0\n", n, m);
	else
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);
	return (0);
}
