#include "main.h"
/**
 * main - Prints first 50 numbers of the fibonacci sequence
 *
 * Return: 0
 */

int main(void)
{
	int a;
	long first, second, tsum;

	first = 1;
	second = 2;
	

	for (i = 0; i < 50; i++)
	{
		if (i == 49)
		{
			printf("%lu", first);
		} else
		{
			printf("%lu, ", first);
			tsum = first + second;
			first = second;
			second = tsum;
		}
	}
	printf("\n");
	return (0);
}
