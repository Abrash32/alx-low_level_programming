#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
<<<<<<< HEAD
*main - Prints the last digit of a randomly generated number
*and whether it is greater than 5, less than 6, or 0.
*Return: Always 0.
*/

int main(void)
{
		int n;

srand(time(0));
=======
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
>>>>>>> 84bea863543b74d2b5d1d44c89b8e1a534e7fc27
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if ((n % 10) > 5)
	{
<<<<<<< HEAD
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}

								return (0);
=======
		printf("Last digit of %d is %d and is greater than 5\n",
			n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			n, n % 10);
	}

	return (0);
>>>>>>> 84bea863543b74d2b5d1d44c89b8e1a534e7fc27
}
