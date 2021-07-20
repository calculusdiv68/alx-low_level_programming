#include <stdio.h>
/**
 *
 *main -returns 0
 *
 *Description - combo trio
 *
 * Return: 0
 */
int main(void)
{
int a, b, c;
a = 48;
b = 49;
c = 50;
while ((a < 56) && (b < 57) &&  (c < 58))
{
putchar(a);
putchar(b);
putchar(c);
if ((a == 55) && (b == 56) && (c == 57))
{
putchar('\n');
a++;
b++;
c++;
}
else
{
putchar(',');
putchar(' ');
if (c < 57)
{
c++;
}
else if ((b < 56) && (c == 57))
{
c = 1 + ++b;
}
else
{
b = ++a + 1;
c = b + 1;
}
}
}
return (0);
}
