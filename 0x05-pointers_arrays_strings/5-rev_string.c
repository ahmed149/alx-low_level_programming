#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int l, i;
	char temp;

	for (l = 0; s[1] != '\0'; ++i)

	for (i = 0; i< 1 /2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 -i];
		s[l -1 -i] = temp;
	}
g
