#include <stdio.h>
/**
 *main - Prints combo of two digits
 *
 *Return: 0
 */
int main(void)
{
int i, j;
i = 48;
j = 49;
while (i < 58)
{
putchar(i);
putchar(j);
if ((i == 56) && (j == 57))
{
putchar('\n');
i++;
j++;
}
else
{
putchar(',');
putchar(' ');
}
if (j < 57)
{
j++
}
else
{ 
i++
j = i +1;
}
}
return (0);
}
