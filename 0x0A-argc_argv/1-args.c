#include "main.h"
#include <stdio.h>
/**
 * main - passes argc and argv
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc-1);

	return (0);
}
