#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- keygen
 * Return:Always Success
 */

int main(void)
{
	int r = 0, i = 0;
	time_t t;

	srand(unsigned int) time(&t));
	while (i < 2772)
	{
		r = rand() % 128;
		if ((i + r) > 2772)
			break;
		i = i + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - i));
	return (0);
}
