#include <stdio.h>


int main()
{
	int A, B, C;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	
	printf("%d\n", A + B - C);

	if (B < 10)
	{
		printf("%d", A * 10 + B - C);
	}
	else if (B < 100)
	{
		printf("%d", A * 100 + B - C);
	}
	else if (B < 1000)
	{
		printf("%d", A * 1000 + B - C);
	}
	else
	{
		printf("%d", A * 10000 + B - C);
	}


	return 0;
}