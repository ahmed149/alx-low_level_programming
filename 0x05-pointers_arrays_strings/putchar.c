#include <stdio.h>
//#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * 0c: The character to print
 *
 * Return: on success 1,
 * on error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
  putchar(c);
	return 0; //(write(1, &c, 1));
}
