#include <unistd.h>

/**
  * _putchar - to print out character
  * @c: the character to be printed
  * Return: 1 for succcess
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
