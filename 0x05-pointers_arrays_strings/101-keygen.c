#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- keygen
 * Return:Always Success
 */

int main(void)
{
	int i, j, k, s;
	char ch[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
		char p[58];

	srand(time(NULL));
	while (s != 2772)
	{
		i = k = s = 0;
		while ((2772 - 122) > s)
		{
			j = rand() % 62;
			p[i] = ch[j];
			s += ch[j];
			i++;
		}
		while (ch[k])
		{
			if (ch[k] == (2772 - s))
			{
				p[i] = ch[k];
				s += ch[k];
				i++;
				break;
			}
			k++;
		}
	}
	p[i] = '\0';
	printf("%s", p);
	return (0);
}
