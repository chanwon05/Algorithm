#include <stdio.h>







int main()
{
	int n;
	int arr[100000] = { 0, };
	

	while (1)
	{
		int k = 0;
		int sum = 0;

		scanf("%d", &n);


		if (n == -1)
		{
			return 0;
		}
		else
		{
			for (int i = 1; i < n; i++)
			{
				if (n % i == 0)
				{
					sum += i;
					arr[k] = i;
					k++;
				}
			}
		}


		if (n == sum)
		{
			printf("%d = ", n);

			for (int j = 0; j < k; j++)
			{
				printf("%d", arr[j]);
				if (j == k-1)
				{
					break;
				}
				printf(" + ");
			}

			printf("\n");
		}
		else
		{
			printf("%d is NOT perfect.\n", n);
		}

		

	}






	
	
	return 0;
}