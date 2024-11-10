#include <stdio.h>


int main()
{
	int A, B, C;
	int arr[10] = { 0, };
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	int mul = A * B * C;
	int cmp;

	while (mul != 0)
	{
		cmp = mul % 10;
		for (int i = 0; i < 10; i++)
		{
			if (cmp == i)
			{
				arr[i] += 1;
			}
		}
		mul /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}


	return 0;
}