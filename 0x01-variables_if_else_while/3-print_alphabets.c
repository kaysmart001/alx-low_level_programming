#include <stdio.h>

/**
  *main - print a to z in lowercase then in uppercase
  *Return: Return 0
  */

int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);

for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
