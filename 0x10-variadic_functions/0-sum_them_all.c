#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: te resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int position;
	int sum;
	va_list sum_them_all;

	sum = 0;

	va_start(sum_them_all, n);

	if (n > 0)
	{
		for (position = 0; position < n; position++)
		{
			sum += va_arg(sum_them_all, int);
		}
	}

	va_end(sum_them_all);
}


