#include "main.h"
/**
 * _puts - this funtion that puts
 * @str: param to _puts function
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
