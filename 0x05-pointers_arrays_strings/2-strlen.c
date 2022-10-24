#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: String to count
 * owned bt daniel
 * Return: String length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
