#include <stdio.h>

/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */

int main(void)
{
	char I = 'a';

	while (I <= 'z')
	{
		putchar(I);
		I++;
	}

	putchar('\n');
	return (0);
}
