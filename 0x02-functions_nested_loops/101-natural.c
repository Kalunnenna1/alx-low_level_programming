#include"main.h"
#include"stdio.h"\

/**
 * main - Entry point
 * Description: to sum up all the
 *              multiple number of 3 or 5
 *              that is below 1024 (excluded)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; ++num)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
