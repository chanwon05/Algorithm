#include <stdio.h>




int main()
{
	int m, n;;
	int arr[1000001] = { 1, 1, 0 };
	scanf("%d %d", &m, &n);

	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; i * j <= n; j++)
		{
			arr[i * j] = 1;
		}
	}

	for (int i = m; i <= n; i++)
	{
		if (arr[i] == 0)
		{
			printf("%d\n", i);
		}
	}



	return 0;
}