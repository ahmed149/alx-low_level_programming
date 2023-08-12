#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar
 * while using int variable
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0'); /*convert digit to ASCII*/
		digit++;
	}
	putchar('\n');
	return (0);
}
