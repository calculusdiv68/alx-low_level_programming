#include <stdio.h>
/**
 *main - Prints combo of two digits
 *
 *Return: 0
 */
int main(void)
{
int a, b;
for (a =48; a < 58; a++)
{
for (b = 48; b < 58; b++)
{
if (a  ==  b)
{
continue;
}
putchar(a);
putchar(b);
if (a == 56 && b == 57)
{
break;
}
 else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
