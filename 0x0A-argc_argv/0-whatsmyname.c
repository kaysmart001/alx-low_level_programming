#include "main.h"
#include <stdio.h>

/**
  * main - to Write a program that prints its name
  * @argc:  the number of arguement
* @argv:  the array of size of argc
* Return: always 0
  */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
