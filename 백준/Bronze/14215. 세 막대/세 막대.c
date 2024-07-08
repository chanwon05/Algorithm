#include <stdio.h>



int max(int a, int b, int c)
{
	if (a > b)
	{
		if (a > c)
			return 1;
		else
			return 3;
	}
	else
	{
		if (b > c)
			return 2;
		else
			return 3;

	}

}



int main()
{
	int a, b, c;
	int circum = 0;

	scanf("%d %d %d", &a, &b, &c);

	for (int i = 1; i <= a; i++)
	{
		int Max = 0;
		int sum = 0;

		for (int j = 1; j <= b; j++)
		{
			for (int k = 1; k <= c; k++)
			{
				Max = max(a, b, c);
				sum = i + j + k;


				if (Max == 1)
				{
					if (i < j + k && circum < sum)
					{
						circum = sum;
					}
				}

				else if (Max == 2)
				{
					if (j< i + k && circum < sum)
					{
						circum = sum;
					}
				}

				else if (Max == 3)
				{
					if (k < j + i && circum < sum)
					{
						circum = sum;
					}
				}
			
			}

		}


	}


	printf("%d", circum);
	
	
	return 0;
}