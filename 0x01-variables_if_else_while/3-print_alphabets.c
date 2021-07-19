#include <stdio.h>
/**
 *main - returns 0
 *
 *Description - main returns 0
 * putchar - Prints each letter of the alphabet in lowercase and then uppercase
 * Return: 0
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
for (a = 'A'; a <= 'Z'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
