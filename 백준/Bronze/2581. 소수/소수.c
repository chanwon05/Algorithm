#include <stdio.h>







int main()
{
	int M, N;
	int sum = 0;
	int cnt;
	int arr[10000] = { 0, };
	int k = 0;

	scanf("%d\n%d", &N, &M);

	

	for (int i = N; i <= M; i++)
	{
		cnt = 1;
		for (int j = 2; j <= i; j++)
		{
			if (i % j == 0)
			{
				cnt++;
			}
		}

		if (cnt == 2)
		{
			arr[k] = i;
			k++;
		}


	}




	for (int i = 0; i < k; i++)
	{
		sum += arr[i];
	}


	if (k == 0)
	{
		printf("%d", -1);
	}
	else
	{
		printf("%d\n%d", sum, arr[0]);
		
	}







	
	
	return 0;
}