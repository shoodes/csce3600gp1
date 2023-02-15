//	Kevin Le - kevinle2@my.unt.edu
// 02/11/2023
// Group Project 1 - CSCE 3600


#include <limits.h>
#include <stdio.h>

void clz()
{
	long long num;

	//Runs while user's input is not in range
	while(1)
	{
		printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively) : ");
		scanf("%lld", &num);
		if(num > 0 && num <= 4294967295)
			break;
	}

	int count = 0;	//stores the number of leading zeroes
	long long temp = num;	//stores input original value

	//while leading set bit is not found
	while(!(num & (~INT_MAX)))
	{
		count++;
		num <<= 1;
	}

	printf("The number of leading zeroes in %lld is %d\n", temp, count);
	return ;
}

