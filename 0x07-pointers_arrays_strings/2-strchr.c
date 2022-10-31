#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: string given
 * @c: another char
 * Return: If c is found - a pointer to the first occurence.
 * If c is not found - NULL
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			return (s + b++);
	}
	return ('\0');
}
