#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generating random passwords for 101-crackme
 * Return: zero
*/

int main(void)
{
	int sum;
	char c;

	srnd(time(NULL));
	while (sum <= 2645)
	{
		c= rand() % 120;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
