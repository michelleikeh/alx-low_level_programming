#include <stdio.h>

/**
 * main - entry function
 * Return: always (success0 0
 */
int main(void)
{
	int i;

	i = 1;
	printf("%d", i);
	for (i = 2; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FIZZBUZZ");
		}
		else if (i % 3 == 0)
		{
			printf("FIZZ");
		}
		else if (i % 5 == 0)
		{
			printf("BUZZ");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
