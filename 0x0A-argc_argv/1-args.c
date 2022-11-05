#include <stdlib.h>
#include <stdio.h>

/**
  * main - to Write a program that prints the number of arguments passed into it.
  * @argc: the number of arguemrnts
  * @argv: the array of the size of argc
  * Return: always 0
  */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
