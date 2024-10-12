#include <stdio.h>


int main()
{
	int arr[10000001] = { 0, };

	for (int i = 2; i < 10000001; i++)
	{
		if (arr[i] == 1)
		{
			continue;
		}
		for (int j = 2; i * j < 10000001; j++)
		{
			arr[i * j] = 1;
		}
	}

	int found;

	while (1)
	{
		int n;
		scanf("%d", &n);
		if (n == 0)
		{
			break;
		}

		found = 0;
		
		for (int i = 3; i < n; i++)
		{
			if (arr[n - i] == 0 && arr[i] == 0)
			{
				printf("%d = %d + %d\n", n, i, n - i);
				found = 1;
				break;
			}
		}
		if (found != 1)
		printf("Goldbach's conjecture is wrong.\n");
	}

	return 0;
}