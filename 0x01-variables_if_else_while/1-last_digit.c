#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Last digit
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	if (y > 5)
	{
		printf("Last digit of %d is %d\n", n, y);
	}
	if (y == 0)
	{
		printf("and is 0");
	}
	if (y < 6 && y != 0)
	{
		print(" and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
