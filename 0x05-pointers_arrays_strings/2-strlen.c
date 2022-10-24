#include "main.h"
/**
 * _strlen - return len of a stir
 * @s: a pointer starting
 * Return: the len of a str
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}
