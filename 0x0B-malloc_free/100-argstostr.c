#include "main.h"
#include <stdlib.h>
/**
 * argstostr - joins all arguments of a program
 * @ac: arg count
 * @av:arg vector
 * Return:pointer of an array of character
 */
char *argstostr(int ac, char **av)
{
	char *output;
	int x, i, j, y;

	if (ac == 0)
		return (NULL);
	for (x = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			x++;
		x++;
	}
	output = malloc((x + 1) * sizeof(char));
	if (output == NULL)
	{
		free(output);
		return (NULL);
	}
	for (i = j = y = 0; y < x; j++ y++)
	{
		if (av[i][j] == '\0')
		{
			output[y] = '\n';
			i++;
			y++;
			j = 0;
		}
		if (y < x - 1)
			output[y] = av[i][j];
	}
	output[y] = '\0';
	return (output);
}
