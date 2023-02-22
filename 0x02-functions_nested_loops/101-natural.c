#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 upto 1024
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, z = a;

	while (i < 1024)
	{
	if ((num % 3 == 0) || (num % 5 == 0))
	{
	z += i;
	}
	i++;
	}
	printf("%d\n", z);
	return (0);
}
