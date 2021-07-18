#include <stdio.h>
/**
 *main - returns 0
 *
 *Description - main returns 0
 *putchar -Prints each letter of the alphabet in lowercase
 *Return: 0
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
