#include <stdio.h>


int main()
{
	int arr[8];

	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &arr[i]);
	}

	if (arr[0] == 1)
	{
		for (int i = 1; i < 8; i++)
		{
			if (arr[i - 1] + 1 == arr[i])
			{
				continue;
			}
			else
			{
				printf("mixed");
				return 0;
			}
		}
		printf("ascending");
		return 0;
	}
	else if (arr[0] == 8)
	{
		for (int i = 1; i < 8; i++)
		{
			if (arr[i - 1] - 1 == arr[i])
			{
				continue;
			}
			else
			{
				printf("mixed");
				return 0;
			}
		}
		printf("descending");
		return 0;
	}
	else
	{
		printf("mixed");
	}
	


	return 0;
}