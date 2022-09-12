#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -entry
 * Description: Checks last digit of a number n
 * Return: Always 0, success
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
		printf("LAst digit of %d is %d and is gretaer than 5\n", n, m);
	}
	else if (m > 6 && m != 0)
	{
		printf("LAst digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	return (0);
}
