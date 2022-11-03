#include "main.h"
/**
 * _strlen_recursion - returns lenght of a string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * check_string - checks if string is palindrome ( empty)
 * @s: string
 * @x: lenght  of string
 * @i: index of string
 * Return: 1 if string is palindrome 0 if not
 */
int check_string(char *s, int x, int i)
{
	if (*(s + x) == *(s + i))
	{
		if (x == i || x == i + 1)
			return (1);
		return (0 + check_string(s, x + 1, i - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 * Return: 1 if success 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_string(s, 0, _strlen_recursion(s) - 1));
}
