#include <stdio.h>

/**
 * main - Entry point to program
 *
 * Return: 0
 */

int main(void)
{
char c;
int d;
long int li;
long long int ii;
float f;

printf("Size of a char: %zu byte(s)\n", sizeof(c));
printf("Size of an int: %zu byte(s)\n", sizeof(d));
printf("Size of a long int: %zu byte(s)\n", sizeof(li));
printf("Size of a long long int: %zu byte(s)\n", sizeof(ii));
printf("Size of a float: %zu byte(s)\n", sizeof(f));


return (0);
}
