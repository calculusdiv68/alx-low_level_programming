#include <stdio.h>
/**
 *main - return 0
 *
 *Description - Reverse printing of alphabet
 *
 *Return: 0
 */
int main(void)
{
int a;
 for (a = 'z'; a >= 'a'; a--)
{
putchar(a);
}
putchar('\n');
return (0);
}
