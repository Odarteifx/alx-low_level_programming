#include "main.h"
#include <stdio.h>
/**
 * main - passes argc and argv
 * @argc: argument count
 * @argv: aegument vector
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf(" %s\n", argv[i]);
	}
	return (0);
}
