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
	int i, sum;
	if (argc > 1)
		for (i = 1; i < argc; i++)
	sum = sum + i;
	printf("%d\n", i);

	return (0);
}
