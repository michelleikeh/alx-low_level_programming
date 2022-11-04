#include <stdio.h>
/**
 * main - prints number of arguments passed
 * @argc: counts command line arguments
 * @argv: array list of command line arguments
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
