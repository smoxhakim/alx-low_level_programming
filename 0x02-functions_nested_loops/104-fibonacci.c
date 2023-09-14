#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci number
 *
 * Return: 0
 */
int main(void)
{
	int c, ret;
	unsigned long f1 = 0, f2 = 1;
	unsigned long f1_lo1;
	unsigned long f1_lo2;
	unsigned long f2_lo1;
	unsigned long f2_lo2;
	unsigned long lo1, lo2;

	for (c = 0; c < 92; c++)
	{
		ret = f1 + f2;
		printf("%lu, ", ret);
		f1 = f2;
		f2 = ret;
	}
	f1_lo1 = f1 / 10000000000;
	f2_lo1 = f2 / 10000000000;
	f1_lo2 = f1 % 10000000000;
	f2_lo2 = f2 % 10000000000;
	for (c = 93; c < 99; c++)
	{
		lo1 = f1_lo1 + f2_lo1;
		lo2 = f1_lo2 + f2_lo2;
		if (f1_lo2 + f2_lo2 > 9999999999)
		{
			lo1 += 1;
			lo2 %= 10000000000;
		}
		printf("%lu%lu", lo1, lo2);
		if (c != 98)
		{
			printf(", ");
		}
		f1_lo1 = f2_lo1;
		f1_lo2 = f2_lo2;
		f2_lo1 = lo1;
		f2_lo2 = lo2;
	}
	printf("\n");
	return (0);
}
