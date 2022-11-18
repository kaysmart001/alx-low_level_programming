#include "variadic_functions.h"


/**
 * sum_the_all - sum the list of arguments
  *@a: for loop
  *@sum: total sum
  */

int sum_them_all(const unsigned int n, ...)
	{
	
	va_list list;

	unsigned int a;

	int sum = 0;

	if (n == 0)
	return();

	va_start(list, args);

	for (a = 0; a < args; a++)
		{
		sum += va_arg(list, int);
		}
	
	va_end(list);
	
	return sum;

	}
