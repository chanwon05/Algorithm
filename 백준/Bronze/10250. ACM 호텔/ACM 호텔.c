#include <stdio.h>


int main()
{
	int H, W, N, T;
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d", &H, &W, &N);
		for (int j = 1; j <= W; j++)
		{
			if (N <= H * j)
			{
				if (j < 10)
				{
					printf("%d0%d\n", N - H * (j - 1), j);
					break;
				}
				else
				{
					printf("%d%d\n", N - H * (j - 1), j);
					break;
				}
			}
		}
	}




	return 0;
}