#include "main.h"

/**
* print_sign - show and print If a number is positive, negative or zero
*@n: The number to be examined
 * Return: 1, 0
  */

int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
}
	else

{
	if (n < 0)
{
	_putchar('-');
	return (1);
}
else
		_putchar('0');
	return (0);
}
}
