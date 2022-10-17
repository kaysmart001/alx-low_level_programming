#include <stdio.h>

/**
   * main - Entry point
    * Return: 0
     */

int main(void)
{
	int i;
	int j;

for (i = 48; i < 58; i++)
{
for (j = i + 1; j < 58;)
{
putchar(i);
putchar(j);

if (i != 56 && j != 58)
{
putchar(44);
putchar(32);
}
}
}
putchar(10);
return (0);
}
