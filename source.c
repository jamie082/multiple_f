#include <stdio.h>
#include "other.c"

int main (void)
{
	int a = 1;
	int b = 50;
	int max = (a > b) ? a : b;
	
	while (a < 15)
	{
		if (a == 5)
		{
			//printf("%d\n", max);
			printf("TRUE\n");
		}
		printf("%d\n", function_prototype (a));
		a++;
	}

	return 0;
}
