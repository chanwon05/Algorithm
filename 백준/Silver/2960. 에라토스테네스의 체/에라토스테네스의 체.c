#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	int arr[1001] = { 0, };
	int cnt = 0;

	for (int i = 2; i <= n; i++)
	{
		if (arr[i] == 1)
			continue;
		for (int j = 1; i*j <= n; j++)
		{
			if (arr[i * j] == 1)
				continue;
			arr[i * j] = 1;
			cnt++;
			if (cnt == k)
			{
				printf("%d", i * j);
				return 0;
			}
		}
	}
		


	return 0;
}