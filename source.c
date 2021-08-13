#include <stdio.h>
#include "other.c"

int main (void)
{
	int a = 1;
	
	while (a <= 15)
	{
		printf("%d\n", function_prototype (a));
		a++;
	}

	return 0;
}
