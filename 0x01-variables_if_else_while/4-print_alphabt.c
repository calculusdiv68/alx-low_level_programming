#include <stdio.h>
/**
 *main - returns 0
 *
 *Description - main returns 0
 * putchar - print the alphabet in lowercase excepte and q
 *Return: 0
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a != 'e' && a != 'q')
{
putchar(a);
}
}
putchar('\n');
return (0);
}
