#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int n = 0;

	for (; str[n] != '\0'; n++)
	{
		if ((n % 2) == 0)
			putchar(str[n]);
		else
			continue;
	}
	putchar('\n');
}
