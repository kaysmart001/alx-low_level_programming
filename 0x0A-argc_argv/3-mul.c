#include <stdlib.h>
#include <stdio.h>

/**
  * main - to Write a program that multiplies two numbers.
  * @argc: arguement count
  * @argv: arguement vector
  * @a: the first arguement
  * @b: the second arguement
  * Return:0
  */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
{
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
	else
	printf("Error\n");
	return (1);
}
