#include <stdio.h>

int main(void)
{
int a;
for(a = 0; a <= 15; a++)
putchar('%x', a);
putchar('\n');

return (0);
}