#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digit of randomly generated number and not 
 * whether it is greater than 5, less than 6, or 0.
 * Return always 0.
 **/
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("last digit of %d is %d and is 0\n", n, last);
	}
	else if (last == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("last digit of %d is %d and is less than 6 not 0\n", n, last);
	}

	return (0);
}
