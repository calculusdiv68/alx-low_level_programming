#include <stdio.h>
/**
 *main - Prints combo of two digits
 *
 *Return: 0
 */
int main(void)
{
int a, b;
for (a =0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
if (a < b)
{
putchar(a);
putchar(b);
}
if (a != 8 || ( a == 8 && b != 9))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
