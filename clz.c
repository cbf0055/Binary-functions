/*
Jared Edge
This code counts the number of leading zeroes in an integer determined by the user
CSCE 3600
*/




#include "major1.h"

void clz()
{
	int number = -1;

	printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
	scanf("%d", &number);

	while (number <= 0)
	{
		printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
		scanf("%d", &number);
	}

	int one = 1;
	one = one << ((sizeof(int)*8) - 1);

	int numZeroes = 0;

	for (int i = 0; i < (sizeof(int)*8); i++)
	{
		if ((number << i) & one) //if the next bit is a 1, leave the loop
		{
			break;
		}

		numZeroes++; //increment number of zeroes counted
	}

	printf("The number of leading zeroes in %d is %d\n", number, numZeroes);
}