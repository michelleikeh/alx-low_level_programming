#include "main.h"

/**
 * leet- encodes stdinput into 1337
 * @s: stdinput
 * Return: s
 */

char *leet(char *s)
{
	int x = 0;
	int i;
	int low_ltrs[] = {97, 101, 111, 116, 108};
	int upp_ltrs[] = {65, 69, 79, 84, 76};
	int nums[] = {52, 51, 48, 55, 49};

	while (*(s + x) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + x) == low_ltrs[i] || *(s + x) == upp_ltrs[i])
			{
				*(s + x) = nums[i];
				break;
			}
		}
		x++;
	}
	return (s);
}
