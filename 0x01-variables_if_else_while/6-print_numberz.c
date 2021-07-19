#include <stdio.h>
/**
 *main - returns 0
 *
 *Description - Single digits of base 10
 *Putchar prints
 *
 *Return: 0
 */
int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
putchar(a + '0');
}
putchar('\n');
return (0);
}
