#include <stdio.h>
#include <string.h>


int main()
{
	int N, M;
	int arr[100][100];
	int arr1[100][100];
	int arr_sum[100][100];

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			arr_sum[i][j] = arr[i][j] + arr1[i][j];
			printf("%d ", arr_sum[i][j]);
		}
		printf("\n");
	}








	return 0;
}