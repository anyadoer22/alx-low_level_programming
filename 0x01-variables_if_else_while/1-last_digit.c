#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - starting point
*
*Return: 0
*
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int l = n % 10;
	if (l > 5)
	{
	printf("Last digit of%d %d and is greater than 5\n", n, l);
	}
	else if (n == 0)
	{
	printf("Last digit of%d %d and is 0\n", n, l);
	}
	else if (n < 6 && n != 0)
	{
	printf("Last digit of%d %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}

