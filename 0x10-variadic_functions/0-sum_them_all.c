#include <stdio.h>
#include <stdarg.h>

int sumall(int args, ...);

int main(void)
{
	printf("addition 1 = %d\n", sumall(3, 10, 3, 2));
	return (0);
}

int sumall(int args, ...)
	{
	
	va_list list;

	va_start(list, args);

	int a, sum = 0;
	
	for (a = 0; a < args; a++)
		{
		sum += va_arg(list, int);
		}
	
	va_end(list);
	
	return sum;

	}
