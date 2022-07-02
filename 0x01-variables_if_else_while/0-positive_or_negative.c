#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */
/*betty style doc for fucntion main goes here */
/**
 * main - prints if number is positive, zero or negative
 * Return: always (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
