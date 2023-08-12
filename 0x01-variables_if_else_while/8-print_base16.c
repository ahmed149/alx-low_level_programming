#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowecase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 48; /*48 is decimal 0*/

	while (n <= 102) /*102 is decimal f*/
	{
		putchar(n);

		if (n == 57) /*after 9 we jump to 96*/
			n += 39;
		n++;
	}
	putchar('\n');
	return (0);
