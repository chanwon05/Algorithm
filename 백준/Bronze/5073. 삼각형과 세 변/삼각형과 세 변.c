#include <stdio.h>







int main()
{
	int a, b, c;
	int sum = 0;

	while (1)
	{
		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0)
		{
			return 0;
		}

		sum = a + b + c;

		int max = a;

		if (max < b)
		{
			max = b;
		}

		if (max < c)
		{
			max = c;
		}

		sum = sum - max;

		if (max >= sum)
		{
			printf("Invalid\n");
			continue;
		}


		if (a == b && b == c && c == a)
		{
			printf("Equilateral\n");
		}
		else if (a == b || b == c || c == a)
		{
			printf("Isosceles\n");
		}
		else 
		{
			printf("Scalene\n");
		}





	}













	
	
	return 0;
}