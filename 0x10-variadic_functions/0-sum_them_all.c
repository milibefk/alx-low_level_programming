#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * Auth: Miliyon Befkadu
 * sum_them_all - sum of all its parameters
 * @n: total number of parameters
 * Return: sum of value parameters
 */



int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
