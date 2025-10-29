#include <stdio.h>
#include "main.h"
#include <stdlib.h>

int main(void)
{
	int n;
	{
		for (n = 0; n <= 100; n++)
		{
			if (n % 15 == 0 )
				printf("FizzBuzz");
			else if(n % 3 == 0)
				printf("Fizz");
			else if(n % 5 == 0)
				printf("Buzz");
			if(n < 100)
				putchar(' ');
		}
		putchar('\n');
	}
	return(0);
}
